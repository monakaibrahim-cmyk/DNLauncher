// Address: 0x00481589
// Name: __realloc_crt
// Category: MFC_CRT


/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    piVar1 = FUN_00475d44(_Ptr,(uint *)_NewSize);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (_NewSize == 0) {
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

