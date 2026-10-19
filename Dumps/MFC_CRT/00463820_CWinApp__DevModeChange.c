// Address: 0x00463820
// Name: CWinApp::DevModeChange
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWinApp::DevModeChange(wchar_t *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::DevModeChange(CWinApp *this,wchar_t *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEW pDevModeOutput;
  LONG LVar4;
  CWinApp *local_8;
  
  if (*(HGLOBAL *)(this + 0x74) != (HGLOBAL)0x0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)(this + 0x74));
    iVar2 = lstrcmpW((LPCWSTR)((int)pvVar1 + (uint)*(ushort *)((int)pvVar1 + 2) * 2),param_1);
    if ((iVar2 == 0) &&
       (BVar3 = OpenPrinterW(param_1,&local_8,(LPPRINTER_DEFAULTSW)0x0), BVar3 != 0)) {
      if (*(void **)(this + 0x70) != (void *)0x0) {
        AfxGlobalFree(*(void **)(this + 0x70));
      }
      dwBytes = DocumentPropertiesW((HWND)0x0,local_8,param_1,(PDEVMODEW)0x0,(PDEVMODEW)0x0,0);
      hMem = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(this + 0x70) = hMem;
      pDevModeOutput = GlobalLock(hMem);
      LVar4 = DocumentPropertiesW((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEW)0x0,2);
      if (LVar4 != 1) {
        AfxGlobalFree(*(void **)(this + 0x70));
        *(undefined4 *)(this + 0x70) = 0;
      }
      ClosePrinter(local_8);
    }
  }
  return;
}

