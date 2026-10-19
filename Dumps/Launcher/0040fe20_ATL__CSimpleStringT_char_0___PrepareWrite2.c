// Address: 0x0040fe20
// Name: ATL::CSimpleStringT<char,0>::PrepareWrite2
// Category: Launcher


/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(CSimpleStringT<char,0> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (param_1 < *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (1 < *(int *)(iVar1 + -4)) {
    Fork(this,param_1);
    return;
  }
  iVar1 = *(int *)(iVar1 + -8);
  if (iVar1 < param_1) {
    if (iVar1 < 0x401) {
      iVar1 = iVar1 * 2;
    }
    else {
      iVar1 = iVar1 + 0x400;
    }
    if (iVar1 < param_1) {
      iVar1 = param_1;
    }
    Reallocate(this,iVar1);
    return;
  }
  return;
}

