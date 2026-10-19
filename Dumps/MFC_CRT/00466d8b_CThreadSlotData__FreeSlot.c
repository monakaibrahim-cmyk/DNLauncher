// Address: 0x00466d8b
// Name: CThreadSlotData::FreeSlot
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::FreeSlot(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if ((0 < param_1) && (param_1 < *(int *)(this + 0xc))) {
    for (iVar3 = *(int *)(this + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (param_1 < *(int *)(iVar3 + 8)) {
        puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + param_1 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0xc) + param_1 * 4) = 0;
      }
    }
    puVar1 = (uint *)(*(int *)(this + 0x10) + param_1 * 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  }
  return;
}

