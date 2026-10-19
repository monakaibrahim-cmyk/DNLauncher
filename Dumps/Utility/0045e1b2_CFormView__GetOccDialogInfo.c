// Address: 0x0045e1b2
// Name: CFormView::GetOccDialogInfo
// Category: Utility


/* Library Function - Single Match
    protected: virtual struct _AFX_OCC_DIALOG_INFO * __thiscall CFormView::GetOccDialogInfo(void)
   
   Library: Visual Studio 2005 Release */

_AFX_OCC_DIALOG_INFO * __thiscall CFormView::GetOccDialogInfo(CFormView *this)

{
  HMODULE hModule;
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar3;
  void *pvVar4;
  
  if ((*(int *)(this + 0x94) == 0) && (*(int *)(this + 0x88) != 0)) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(this + 0x88),(LPCWSTR)0x5);
    hResData = LoadResource(hModule,hResInfo);
    if ((hResData != (HGLOBAL)0x0) && (pvVar3 = LockResource(hResData), pvVar3 != (LPVOID)0x0)) {
      pAVar2 = AfxGetModuleState();
      piVar1 = *(int **)(pAVar2 + 0x3c);
      if (piVar1 != (int *)0x0) {
        pvVar4 = FUN_00452728(0x10);
        (**(code **)(*piVar1 + 0x14))(pvVar4,pvVar3);
        *(void **)(this + 0x94) = pvVar4;
      }
    }
  }
  return *(_AFX_OCC_DIALOG_INFO **)(this + 0x94);
}

