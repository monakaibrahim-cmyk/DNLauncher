// Address: 0x00403680
// Name: ATL::CSimpleStringT<wchar_t,0>::Empty
// Category: Launcher


/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::Empty(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<wchar_t,0>::Empty(CSimpleStringT<wchar_t,0> *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)this;
  puVar1 = (undefined4 *)(iVar4 + -0x10);
  piVar3 = (int *)*puVar1;
  if (*(int *)(iVar4 + -0xc) != 0) {
    piVar2 = (int *)(iVar4 + -4);
    if (*(int *)(iVar4 + -4) < 0) {
      if (*(int *)(iVar4 + -8) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80070057);
      }
      *(undefined4 *)(iVar4 + -0xc) = 0;
      **(undefined2 **)this = 0;
      return;
    }
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(*(int *)*puVar1 + 4))(puVar1);
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    *(int *)this = iVar4 + 0x10;
  }
  return;
}

