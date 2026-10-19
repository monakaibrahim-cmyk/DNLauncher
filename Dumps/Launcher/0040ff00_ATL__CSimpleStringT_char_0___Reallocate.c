// Address: 0x0040ff00
// Name: ATL::CSimpleStringT<char,0>::Reallocate
// Category: Launcher


/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(CSimpleStringT<char,0> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((*(int *)(iVar1 + -8) < param_1) && (0 < param_1)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + -0x10) + 8))(iVar1 + -0x10,param_1,1);
    if (iVar1 != 0) goto LAB_0040ff2e;
  }
  iVar1 = FUN_0040fef0();
LAB_0040ff2e:
  *(int *)this = iVar1 + 0x10;
  return;
}

