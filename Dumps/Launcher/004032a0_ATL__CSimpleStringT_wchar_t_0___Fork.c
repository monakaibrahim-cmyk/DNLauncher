// Address: 0x004032a0
// Name: ATL::CSimpleStringT<wchar_t,0>::Fork
// Category: Launcher


/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<wchar_t,0>::Fork(int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall ATL::CSimpleStringT<wchar_t,0>::Fork(CSimpleStringT<wchar_t,0> *this,int param_1)

{
  int *piVar1;
  rsize_t _DstSize;
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
  iVar4 = (**(code **)*puVar3)(param_1,2);
  if (iVar4 == 0) {
    FUN_0040fef0();
  }
  if (iVar2 < param_1) {
    param_1 = iVar2;
  }
  _DstSize = param_1 * 2 + 2;
  _memcpy_s((void *)(iVar4 + 0x10),_DstSize,_Src,_DstSize);
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

