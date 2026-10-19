// Address: 0x0041c430
// Name: FUN_0041c430
// Category: Launcher


void __thiscall FUN_0041c430(void *this,LONG *param_1,undefined4 *param_2)

{
  tagSIZE local_10;
  
  GetTextExtentPoint32W
            (*(HDC *)((int)this + 8),(LPCWSTR)*param_2,*(int *)((LPCWSTR)*param_2 + -6),&local_10);
  *param_1 = local_10.cx;
  param_1[1] = local_10.cy;
  return;
}

