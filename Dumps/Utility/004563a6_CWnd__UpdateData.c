// Address: 0x004563a6
// Name: CWnd::UpdateData
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CWnd::UpdateData(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  int local_30;
  CWnd *local_2c;
  undefined4 local_28;
  _AFX_THREAD_STATE *local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4563b2;
  local_30 = param_1;
  local_28 = 0;
  local_2c = this;
  local_1c = AfxGetThreadState();
  local_18 = *(undefined4 *)(local_1c + 0x13c);
  *(undefined4 *)(local_1c + 0x13c) = *(undefined4 *)(this + 0x20);
  local_8 = 0;
  (**(code **)(*(int *)this + 0xf4))(&local_30);
  *(undefined4 *)(local_1c + 0x13c) = local_18;
  return 1;
}

