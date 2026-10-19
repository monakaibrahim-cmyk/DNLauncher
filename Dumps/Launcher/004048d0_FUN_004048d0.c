// Address: 0x004048d0
// Name: FUN_004048d0
// Category: Launcher


void __thiscall
FUN_004048d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            wchar_t **param_5)

{
  tagVARIANT tVar1;
  
  tVar1.n1.decVal.Hi32 = param_2;
  tVar1.n1._0_4_ = param_1;
  tVar1.n1._8_4_ = param_3;
  tVar1.n1._12_4_ = param_4;
  CWnd::GetAccessibleName(this,tVar1,param_5);
  return;
}

