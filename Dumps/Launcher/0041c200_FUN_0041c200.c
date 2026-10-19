// Address: 0x0041c200
// Name: FUN_0041c200
// Category: Launcher


void __thiscall
FUN_0041c200(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,DWORD param_8)

{
  HDC hdcSrc;
  
  hdcSrc = (HDC)0x0;
  if (param_5 != 0) {
    hdcSrc = *(HDC *)(param_5 + 4);
  }
  BitBlt(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,hdcSrc,param_6,param_7,param_8);
  return;
}

