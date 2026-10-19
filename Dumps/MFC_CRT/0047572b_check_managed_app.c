// Address: 0x0047572b
// Name: check_managed_app
// Category: MFC_CRT


/* Library Function - Single Match
    _check_managed_app
   
   Library: Visual Studio 2005 Release */

uint __cdecl check_managed_app(void)

{
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    return (uint)(*(int *)(&UNK_004000e8 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0);
  }
  return 0;
}

