// Address: 0x0045b6c2
// Name: FUN_0045b6c2
// Category: Utility


int * __thiscall
FUN_0045b6c2(void *this,int *param_1,int param_2,int param_3,LPCWSTR param_4,int param_5,int param_6
            ,INT *param_7,int param_8)

{
  LONG LVar1;
  
  LVar1 = TabbedTextOutW(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  param_1[1] = (int)(short)((uint)LVar1 >> 0x10);
  *param_1 = (int)(short)LVar1;
  return param_1;
}

