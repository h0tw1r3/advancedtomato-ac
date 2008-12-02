------------------------------------------------------------------------------
--                                                                          --
--                         GNAT COMPILER COMPONENTS                         --
--                                                                          --
--                            M D L L . F I L E S                           --
--                                                                          --
--                                 B o d y                                  --
--                                                                          --
--                            $Revision$
--                                                                          --
--          Copyright (C) 1992-1999 Free Software Foundation, Inc.          --
--                                                                          --
-- GNAT is free software;  you can  redistribute it  and/or modify it under --
-- terms of the  GNU General Public License as published  by the Free Soft- --
-- ware  Foundation;  either version 2,  or (at your option) any later ver- --
-- sion.  GNAT is distributed in the hope that it will be useful, but WITH- --
-- OUT ANY WARRANTY;  without even the  implied warranty of MERCHANTABILITY --
-- or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License --
-- for  more details.  You should have  received  a copy of the GNU General --
-- Public License  distributed with GNAT;  see file COPYING.  If not, write --
-- to  the Free Software Foundation,  59 Temple Place - Suite 330,  Boston, --
-- MA 02111-1307, USA.                                                      --
--                                                                          --
-- GNAT was originally developed  by the GNAT team at  New York University. --
-- Extensive contributions were provided by Ada Core Technologies Inc.      --
--                                                                          --
------------------------------------------------------------------------------

--  Simple services used by GNATDLL to deal with Filename extension.

with Ada.Strings.Fixed;

package body MDLL.Files is

   use Ada;

   -------------
   -- Get_Ext --
   -------------

   function Get_Ext (Filename : in String)
                     return String
   is
      use Strings.Fixed;
      I : constant Natural := Index (Filename, ".", Strings.Backward);
   begin
      if I = 0 then
         return "";
      else
         return Filename (I .. Filename'Last);
      end if;
   end Get_Ext;

   ------------
   -- Is_Ali --
   ------------

   function Is_Ali (Filename : in String)
                    return Boolean is
   begin
      return Get_Ext (Filename) = ".ali";
   end Is_Ali;

   ------------
   -- Is_Obj --
   ------------

   function Is_Obj (Filename : in String)
                    return Boolean
   is
      Ext : constant String := Get_Ext (Filename);
   begin
      return Ext = ".o" or else Ext = ".obj";
   end Is_Obj;

   ------------
   -- Ext_To --
   ------------

   function Ext_To (Filename : in String;
                    New_Ext  : in String := No_Ext)
                    return String
   is
      use Strings.Fixed;
      I : constant Natural := Index (Filename, ".", Strings.Backward);
   begin
      if I = 0 then
         return Filename;
      else
         if New_Ext = "" then
            return Head (Filename, I - 1);
         else
            return Head (Filename, I - 1) & '.' & New_Ext;
         end if;
      end if;
   end Ext_To;

end MDLL.Files;
