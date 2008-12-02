/****************************************************************************
 *                                                                          *
 *                         GNAT COMPILER COMPONENTS                         *
 *                                                                          *
 *                              S T R I N G T                               *
 *                                                                          *
 *                              C Header File                               *
 *                                                                          *
 *                            $Revision$
 *                                                                          *
 *          Copyright (C) 1992-2001 Free Software Foundation, Inc.          *
 *                                                                          *
 * GNAT is free software;  you can  redistribute it  and/or modify it under *
 * terms of the  GNU General Public License as published  by the Free Soft- *
 * ware  Foundation;  either version 2,  or (at your option) any later ver- *
 * sion.  GNAT is distributed in the hope that it will be useful, but WITH- *
 * OUT ANY WARRANTY;  without even the  implied warranty of MERCHANTABILITY *
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License *
 * for  more details.  You should have  received  a copy of the GNU General *
 * Public License  distributed with GNAT;  see file COPYING.  If not, write *
 * to  the Free Software Foundation,  59 Temple Place - Suite 330,  Boston, *
 * MA 02111-1307, USA.                                                      *
 *                                                                          *
 * GNAT was originally developed  by the GNAT team at  New York University. *
 * Extensive contributions were provided by Ada Core Technologies Inc.      *
 *                                                                          *
 ****************************************************************************/

/* This file is the C file that corresponds to the Ada package spec
   Stringt. It was created manually from stringt.ads and stringt.adb
									    
   Note: only the access functions are provided, since the tree transformer
   is not allowed to modify the tree or its auxiliary structures.
									    
   This package contains routines for handling the strings table which is
   used to store string constants encountered in the source, and also those
   additional string constants generated by compile time concatenation and
   other similar processing.
									    
   A string constant in this table consists of a series of Char_Code values,
   so that 16-bit character codes can be properly handled if this feature is
   implemented in the scanner.
									    
   There is no guarantee that hashing is used in the implementation. This
   means that the caller cannot count on having the same Id value for two
   identical strings stored separately.
									    
   The String_Id values reference entries in the Strings table, which
   contains String_Entry records that record the length of each stored string
   and its starting location in the String_Chars table.  */

struct String_Entry
{
  Int String_Index;
  Int Length;
};

/* Pointer to string entry vector. This pointer is passed to the tree
   transformer and stored in a global location for access from here after
   subtracting String_First_Entry, so that String_Id values can be used as
   subscripts into the vector. */
extern struct String_Entry *Strings_Ptr;

/* Pointer to name characters table. This pointer is passed to the tree
   transformer and stored in a global location for access from here. The
   String_Index values are subscripts into this array.  */
extern Char_Code *String_Chars_Ptr;


/* String_Length returns the length of the specified string.  */
INLINE Int String_Length PARAMS ((String_Id));

INLINE Int
String_Length (Id)
     String_Id Id;
{
  return Strings_Ptr [Id].Length;
}


/* Get_String_Char obtains the specified character from a stored string.  The
   lower bound of stored strings is always 1, so the range of values is 1 to
   String_Length (Id).  */
INLINE Char_Code Get_String_Char PARAMS ((String_Id, Int));

INLINE Char_Code
Get_String_Char (Id, Index)
     String_Id Id;
     Int Index;
{
  return String_Chars_Ptr [Strings_Ptr [Id].String_Index + Index - 1];
}
