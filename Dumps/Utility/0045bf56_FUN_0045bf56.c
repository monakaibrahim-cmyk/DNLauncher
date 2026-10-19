// Address: 0x0045bf56
// Name: FUN_0045bf56
// Category: Utility


void FUN_0045bf56(HDC param_1,HGDIOBJ param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject(param_1,param_2);
  CGdiObject::FromHandle(pvVar1);
  return;
}

