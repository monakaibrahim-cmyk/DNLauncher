// Address: 0x00466ac9
// Name: CThreadSlotData::GetThreadValue
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * __thiscall CThreadSlotData::GetThreadValue(int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall CThreadSlotData::GetThreadValue(CThreadSlotData *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  LPVOID pvVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((((0 < param_1) && (param_1 < *(int *)(this + 0xc))) &&
      (pvVar2 = TlsGetValue(*(DWORD *)this), pvVar2 != (LPVOID)0x0)) &&
     (param_1 < *(int *)((int)pvVar2 + 8))) {
    pvVar1 = *(void **)(*(int *)((int)pvVar2 + 0xc) + param_1 * 4);
    LeaveCriticalSection(lpCriticalSection);
    return pvVar1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return (void *)0x0;
}

