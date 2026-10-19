// Address: 0x00478413
// Name: __vsnwprintf_l
// Category: MFC_CRT


/* Library Function - Single Match
    __vsnwprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
              )

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (wchar_t *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (wchar_t *)0x0)) {
    local_24._flag = 0x42;
    local_24._base = (char *)_DstBuf;
    local_24._ptr = (char *)_DstBuf;
    if (_MaxCount < 0x40000000) {
      local_24._cnt = _MaxCount * 2;
    }
    else {
      local_24._cnt = 0x7fffffff;
    }
    iVar2 = FUN_0048023c((int)&local_24,(ushort *)_Format,_Locale,(wchar_t *)_ArgList);
    if (_DstBuf != (wchar_t *)0x0) {
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        FUN_004800dc(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
        local_24._ptr = (char *)((int)local_24._ptr + 1);
      }
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        FUN_004800dc(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
      }
    }
  }
  else {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}

