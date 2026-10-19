// Address: 0x0040fe70
// Name: ATL::CSimpleStringT<char,0>::Fork
// Category: Launcher


/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<char,0>::Fork(int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall ATL::CSimpleStringT<char,0>::Fork(CSimpleStringT<char,0> *this,int param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_EBP;
  undefined4 *puVar5;
  
  _Src = *(void **)this;
  iVar2 = *(int *)((int)_Src + -0xc);
  puVar5 = (undefined4 *)((int)_Src + -0x10);
  puVar3 = (undefined4 *)(**(code **)(*(int *)*puVar5 + 0x10))();
  iVar4 = (**(code **)*puVar3)(param_1,1);
  if (iVar4 == 0) {
    FUN_0040fef0();
  }
  if (iVar2 < param_1) {
    param_1 = iVar2;
  }
  _memcpy_s((void *)(iVar4 + 0x10),param_1 + 1U,_Src,param_1 + 1U);
  *(int *)(iVar4 + 4) = iVar2;
  piVar1 = (int *)((int)_Src + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  *unaff_EBP = (void *)(iVar4 + 0x10);
  return;
}

