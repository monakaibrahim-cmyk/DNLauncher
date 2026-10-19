// Address: 0x004774ba
// Name: FUN_004774ba
// Category: MFC_CRT


int __cdecl FUN_004774ba(FILE *param_1)

{
  DWORD *pDVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if (param_1 == (FILE *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar4 = -1;
  }
  else {
    if ((param_1->_flag & 0x83) != 0) {
      iVar4 = __flush(param_1);
      FUN_0048430c((int)param_1);
      uVar2 = __fileno(param_1);
      iVar3 = FUN_0048423f(uVar2);
      if (iVar3 < 0) {
        iVar4 = -1;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(param_1->_tmpfname);
      }
    }
    param_1->_flag = 0;
  }
  return iVar4;
}

