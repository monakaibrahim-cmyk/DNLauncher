// Address: 0x00453681
// Name: AFX_MODULE_STATE::CreateActivationContext
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall AFX_MODULE_STATE::CreateActivationContext(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall AFX_MODULE_STATE::CreateActivationContext(AFX_MODULE_STATE *this)

{
  HMODULE hModule;
  DWORD DVar1;
  void *pvVar2;
  undefined4 local_234;
  undefined4 local_230;
  WCHAR *local_22c;
  undefined4 local_220;
  HMODULE local_218;
  WCHAR local_214 [48];
  undefined1 local_1b4 [424];
  short local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1b4;
  _AfxInitContextAPI();
  hModule = *(HMODULE *)(this + 8);
  local_a = 0;
  local_c = 0;
  DVar1 = GetModuleFileNameW(hModule,local_214,0x105);
  if (DVar1 != 0) {
    if (local_c == 0) {
      local_22c = local_214;
      local_234 = 0x20;
      local_230 = 0x88;
      local_220 = 2;
      local_218 = hModule;
      pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
      *(void **)(this + 0x80) = pvVar2;
      if (pvVar2 == (void *)0xffffffff) {
        local_220 = 3;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
      }
      if (*(int *)(this + 0x80) == -1) {
        local_220 = 1;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
        if (pvVar2 == (void *)0xffffffff) {
          *(undefined4 *)(this + 0x80) = 0;
        }
      }
    }
    else {
      SetLastError(0x6f);
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_1b4);
  return;
}

