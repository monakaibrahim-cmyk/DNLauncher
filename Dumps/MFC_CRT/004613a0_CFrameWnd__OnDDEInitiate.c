// Address: 0x004613a0
// Name: CFrameWnd::OnDDEInitiate
// Category: MFC_CRT


/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnDDEInitiate(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall CFrameWnd::OnDDEInitiate(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  long lVar3;
  short sVar4;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  if ((((iVar1 != 0) && ((ATOM)param_2 != 0)) &&
      (sVar4 = (short)((uint)param_2 >> 0x10), sVar4 != 0)) &&
     (((ATOM)param_2 == *(ATOM *)(iVar1 + 0x90) && (sVar4 == *(short *)(iVar1 + 0x92))))) {
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x90),local_210,0x103);
    GlobalAddAtomW(local_210);
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x92),local_210,0x103);
    GlobalAddAtomW(local_210);
    SendMessageW((HWND)param_1,0x3e4,*(WPARAM *)(this + 0x20),*(LPARAM *)(iVar1 + 0x90));
  }
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}

