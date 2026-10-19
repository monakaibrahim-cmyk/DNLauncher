// Address: 0x004797ff
// Name: __flush
// Category: MFC_CRT


/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  WCHAR *pWVar2;
  int iVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  
  iVar3 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    pWVar2 = (WCHAR *)_File->_base;
    pWVar4 = (WCHAR *)(_File->_ptr + -(int)pWVar2);
    if (0 < (int)pWVar4) {
      pWVar5 = pWVar4;
      uVar1 = __fileno(_File);
      pWVar2 = (WCHAR *)FUN_00489089(uVar1,pWVar2,pWVar5);
      if (pWVar2 == pWVar4) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar3 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar3;
}

