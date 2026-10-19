// Address: 0x00464cd7
// Name: IsDialogEx
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl IsDialogEx(struct DLGTEMPLATE const *)
   
   Library: Visual Studio 2005 Release */

int __cdecl IsDialogEx(DLGTEMPLATE *param_1)

{
  int in_EAX;
  
  if (in_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  return (uint)(*(short *)(in_EAX + 2) == -1);
}

