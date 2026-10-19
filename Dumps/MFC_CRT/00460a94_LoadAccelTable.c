// Address: 0x00460a94
// Name: LoadAccelTable
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CFrameWnd::LoadAccelTable(char const *)
    public: int __thiscall CFrameWnd::LoadAccelTable(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

bool __thiscall LoadAccelTable(void *this,LPCWSTR param_1)

{
  AFX_MODULE_STATE *pAVar1;
  HACCEL pHVar2;
  
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadAcceleratorsW(*(HINSTANCE *)(pAVar1 + 0xc),param_1);
  *(HACCEL *)((int)this + 0x60) = pHVar2;
  return pHVar2 != (HACCEL)0x0;
}

