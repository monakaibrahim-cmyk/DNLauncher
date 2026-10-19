// Address: 0x004815d4
// Name: __recalloc_crt
// Category: MFC_CRT


/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    piVar1 = FUN_00475f5f(_Ptr,_Count,_Size);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_004cb858 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_004cb858 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

