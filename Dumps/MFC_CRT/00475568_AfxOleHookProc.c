// Address: 0x00475568
// Name: AfxOleHookProc
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned int __stdcall AfxOleHookProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

uint AfxOleHookProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  
  if (param_2 == 0x110) {
    uVar1 = AfxDlgProc(param_1,0x110,param_3,param_4);
  }
  else if ((param_2 == 0x111) && ((short)param_3 == 99)) {
    SendMessageW(param_1,0x111,0xe146,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

