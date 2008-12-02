/* Copyright (C) 1993, 94, 95, 96, 1997, 2001 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <errno.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <hurd.h>
#include <hurd/fd.h>
#include "dirstream.h"


/* Read a directory entry from DIRP.  */
int
__readdir_r (DIR *dirp, struct dirent *entry, struct dirent **result)
{
  struct dirent *dp;
  error_t err = 0;

  if (dirp == NULL)
    {
      errno = EINVAL;
      return errno;
    }

  __libc_lock_lock (dirp->__lock);

  do
    {
      if (dirp->__ptr - dirp->__data >= dirp->__size)
	{
	  /* We've emptied out our buffer.  Refill it.  */

	  char *data = dirp->__data;
	  int nentries;

	  if (err = HURD_FD_PORT_USE (dirp->__fd,
				      __dir_readdir (port,
						     &data, &dirp->__size,
						     dirp->__entry_ptr,
						     -1, 0, &nentries)))
	    {
	      __hurd_fail (err);
	      dp = NULL;
	      break;
	    }

	  /* DATA now corresponds to entry index DIRP->__entry_ptr.  */
	  dirp->__entry_data = dirp->__entry_ptr;

	  if (data != dirp->__data)
	    {
	      /* The data was passed out of line, so our old buffer is no
		 longer useful.  Deallocate the old buffer and reset our
		 information for the new buffer.  */
	      __vm_deallocate (__mach_task_self (),
			       (vm_address_t) dirp->__data,
			       dirp->__allocation);
	      dirp->__data = data;
	      dirp->__allocation = round_page (dirp->__size);
	    }

	  /* Reset the pointer into the buffer.  */
	  dirp->__ptr = dirp->__data;

	  if (nentries == 0)
	    {
	      /* End of file.  */
	      dp = NULL;
	      break;
	    }

	  /* We trust the filesystem to return correct data and so we
	     ignore NENTRIES.  */
	}

      dp = (struct dirent *) dirp->__ptr;
      dirp->__ptr += dp->d_reclen;
      ++dirp->__entry_ptr;

      /* Loop to ignore deleted files.  */
    } while (dp->d_fileno == 0);

  if (dp)
    {
      *entry = *dp;
      memcpy (entry->d_name, dp->d_name, dp->d_namlen + 1);
      *result = entry;
    }
  else
    *result = NULL;

  __libc_lock_unlock (dirp->__lock);

  return dp ? 0 : err ? errno : 0;
}

weak_alias (__readdir_r, readdir_r)
