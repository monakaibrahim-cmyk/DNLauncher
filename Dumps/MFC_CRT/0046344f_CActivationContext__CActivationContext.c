// Address: 0x0046344f
// Name: CActivationContext::CActivationContext
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CActivationContext::CActivationContext(void *)
   
   Library: Visual Studio 2005 Release */

CActivationContext * __thiscall
CActivationContext::CActivationContext(CActivationContext *this,void *param_1)

{
  HMODULE hModule;
  
  *(void **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  if (DAT_004cab10 == '\0') {
    hModule = GetModuleHandleW(L"KERNEL32");
    if (hModule == (HMODULE)0x0) {
LAB_0046347d:
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    DAT_004cab00 = GetProcAddress(hModule,"CreateActCtxW");
    DAT_004cab04 = GetProcAddress(hModule,"ReleaseActCtx");
    DAT_004cab08 = GetProcAddress(hModule,"ActivateActCtx");
    DAT_004cab0c = GetProcAddress(hModule,"DeactivateActCtx");
    if (DAT_004cab00 == (FARPROC)0x0) {
      if (((DAT_004cab04 != (FARPROC)0x0) || (DAT_004cab08 != (FARPROC)0x0)) ||
         (DAT_004cab0c != (FARPROC)0x0)) goto LAB_0046347d;
    }
    else if (((DAT_004cab04 == (FARPROC)0x0) || (DAT_004cab08 == (FARPROC)0x0)) ||
            (DAT_004cab0c == (FARPROC)0x0)) goto LAB_0046347d;
    DAT_004cab10 = '\x01';
  }
  return this;
}

