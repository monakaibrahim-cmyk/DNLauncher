// Address: 0x0047815f
// Name: FID_conflict:__splitpath
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    __splitpath
    __wsplitpath
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl
FID_conflict___splitpath
          (wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext)

{
  FUN_00477f6f((uchar *)_FullPath,(uchar *)_Drive,-(uint)(_Drive != (wchar_t *)0x0) & 3,
               (uchar *)_Dir,-(uint)(_Dir != (wchar_t *)0x0) & 0x100,(uchar *)_Filename,
               -(uint)(_Filename != (wchar_t *)0x0) & 0x100,(uchar *)_Ext,
               -(uint)(_Ext != (wchar_t *)0x0) & 0x100);
  return;
}

