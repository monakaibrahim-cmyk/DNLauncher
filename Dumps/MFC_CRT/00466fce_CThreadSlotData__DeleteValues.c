// Address: 0x00466fce
// Name: CThreadSlotData::DeleteValues
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::DeleteValues(struct HINSTANCE__ *,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
CThreadSlotData::DeleteValues(CThreadSlotData *this,HINSTANCE__ *param_1,int param_2)

{
  CThreadData *pCVar1;
  CThreadData *pCVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if (param_2 == 0) {
    pCVar2 = TlsGetValue(*(DWORD *)this);
    if (pCVar2 != (CThreadData *)0x0) {
      DeleteValues(this,pCVar2,param_1);
    }
  }
  else {
    pCVar2 = *(CThreadData **)(this + 0x14);
    while (pCVar2 != (CThreadData *)0x0) {
      pCVar1 = *(CThreadData **)(pCVar2 + 4);
      DeleteValues(this,pCVar2,param_1);
      pCVar2 = pCVar1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}

