// Address: 0x00404900
// Name: FUN_00404900
// Category: Launcher


void __thiscall
FUN_00404900(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            IDispatch **param_5)

{
  tagVARIANT tVar1;
  
  tVar1.n1.decVal.Hi32 = param_2;
  tVar1.n1._0_4_ = param_1;
  tVar1.n1._8_4_ = param_3;
  tVar1.n1._12_4_ = param_4;
  CWnd::GetAccessibleChild(this,tVar1,param_5);
  return;
}

