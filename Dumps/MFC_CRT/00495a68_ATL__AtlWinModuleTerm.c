// Address: 0x00495a68
// Name: ATL::AtlWinModuleTerm
// Category: MFC_CRT


/* Library Function - Single Match
    long __stdcall ATL::AtlWinModuleTerm(struct ATL::_ATL_WIN_MODULE70 *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlWinModuleTerm(_ATL_WIN_MODULE70 *param_1,HINSTANCE__ *param_2)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  
  if (param_1 == (_ATL_WIN_MODULE70 *)0x0) {
LAB_00495a71:
    lVar1 = -0x7ff8ffa9;
  }
  else {
    if (*(int *)param_1 != 0) {
      if (*(int *)param_1 != 0x2c) goto LAB_00495a71;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          puVar2 = CSimpleArray<unsigned_short,ATL::CSimpleArrayEqualHelper<unsigned_short>_>::
                   operator[]((CSimpleArray<unsigned_short,ATL::CSimpleArrayEqualHelper<unsigned_short>_>
                               *)(param_1 + 0x20),iVar3);
          UnregisterClassA((LPCSTR)(uint)*puVar2,param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x24));
      }
      FUN_00495a0a((undefined4 *)(param_1 + 0x20));
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      *(undefined4 *)param_1 = 0;
    }
    lVar1 = 0;
  }
  return lVar1;
}

