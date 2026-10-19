// Address: 0x00469326
// Name: CHandleMap::DeleteTemp
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CHandleMap::DeleteTemp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)

{
  int iVar1;
  void *local_10;
  __POSITION *local_c;
  void *local_8;
  
  if (this != (CHandleMap *)0x0) {
    local_c = (__POSITION *)-(uint)(*(int *)(this + 0x44) != 0);
    if (local_c != (__POSITION *)0x0) {
      do {
        CMapPtrToPtr::GetNextAssoc((CMapPtrToPtr *)(this + 0x38),&local_c,&local_10,&local_8);
        iVar1 = *(int *)(this + 0x58);
        *(undefined4 *)(iVar1 + (int)local_8) = 0;
        if (*(int *)(this + 0x5c) == 2) {
          ((undefined4 *)(iVar1 + (int)local_8))[1] = 0;
        }
        (**(code **)(this + 0x18))(local_8);
      } while (local_c != (__POSITION *)0x0);
    }
    FUN_00467839((int)(this + 0x38));
    CFixedAllocNoSync::FreeAll((CFixedAllocNoSync *)(this + 4));
  }
  return;
}

