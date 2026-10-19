// Address: 0x00483542
// Name: __stbuf
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined **ppuVar5;
  int iVar6;
  void *pvVar7;
  
  uVar4 = __fileno(_File);
  bVar3 = FUN_0048e22a(uVar4);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  ppuVar5 = FUN_0047a87c();
  if (_File == (FILE *)(ppuVar5 + 8)) {
    iVar6 = 0;
  }
  else {
    ppuVar5 = FUN_0047a87c();
    if (_File != (FILE *)(ppuVar5 + 0x10)) {
      return 0;
    }
    iVar6 = 1;
  }
  _DAT_004cae80 = _DAT_004cae80 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_004cb960 + iVar6;
  if (*piVar1 == 0) {
    pvVar7 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar7;
    if (pvVar7 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_004835c6;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_004835c6:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}

