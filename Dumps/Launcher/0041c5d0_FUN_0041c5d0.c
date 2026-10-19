// Address: 0x0041c5d0
// Name: FUN_0041c5d0
// Category: Launcher


void __fastcall
FUN_0041c5d0(DWORD param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int in_EAX;
  HDC hdcSrc;
  
  hdcSrc = (HDC)0x0;
  if (in_EAX != 0) {
    hdcSrc = *(HDC *)(in_EAX + 4);
  }
  StretchBlt(*(HDC *)(param_3 + 4),param_4,param_5,param_6,param_7,hdcSrc,0,0,param_8,param_2,
             param_1);
  return;
}

