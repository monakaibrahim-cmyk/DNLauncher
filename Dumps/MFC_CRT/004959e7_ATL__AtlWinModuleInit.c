// Address: 0x004959e7
// Name: ATL::AtlWinModuleInit
// Category: MFC_CRT


/* Library Function - Single Match
    long __stdcall ATL::AtlWinModuleInit(struct ATL::_ATL_WIN_MODULE70 *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlWinModuleInit(_ATL_WIN_MODULE70 *param_1)

{
  long lVar1;
  
  if ((param_1 == (_ATL_WIN_MODULE70 *)0x0) || (*(int *)param_1 != 0x2c)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    lVar1 = CComCriticalSection::Init((CComCriticalSection *)(param_1 + 4));
  }
  return lVar1;
}

