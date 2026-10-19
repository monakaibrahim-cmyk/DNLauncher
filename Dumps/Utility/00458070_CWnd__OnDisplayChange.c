// Address: 0x00458070
// Name: CWnd::OnDisplayChange
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  ulong uVar2;
  tagMSG *ptVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_0041c6c0();
  if (pCVar1 == this) {
    AUX_DATA::UpdateSysMetrics((AUX_DATA *)&DAT_004cab28);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    ptVar3 = GetCurrentMessage();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x20),ptVar3->message,ptVar3->wParam,ptVar3->lParam,1,1);
  }
  lVar4 = Default(this);
  return lVar4;
}

