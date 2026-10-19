// Address: 0x00466f39
// Name: CThreadSlotData::DeleteValues
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::DeleteValues(struct CThreadData *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CThreadSlotData::DeleteValues(CThreadSlotData *this,CThreadData *param_1,HINSTANCE__ *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = true;
  if (1 < *(int *)(param_1 + 8)) {
    do {
      if ((param_2 == (HINSTANCE__ *)0x0) ||
         (*(HINSTANCE__ **)(*(int *)(this + 0x10) + 4 + iVar3 * 8) == param_2)) {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      }
      else if (*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) != 0) {
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
    if (!bVar2) {
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  CSimpleList::Remove((CSimpleList *)(this + 0x14),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  LocalFree(*(HLOCAL *)(param_1 + 0xc));
  (*(code *)**(undefined4 **)param_1)(1);
  TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
  return;
}

