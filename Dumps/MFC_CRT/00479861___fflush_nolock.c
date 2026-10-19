// Address: 0x00479861
// Name: __fflush_nolock
// Category: MFC_CRT


/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((_File->_flag & 0x4000) != 0) {
    uVar2 = __fileno(_File);
    DVar3 = FUN_00489165(uVar2);
    return -(uint)(DVar3 != 0);
  }
  return 0;
}

