// Address: 0x004670e1
// Name: CThreadSlotData::~CThreadSlotData
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CThreadSlotData::~CThreadSlotData(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadSlotData::~CThreadSlotData(CThreadSlotData *this)

{
  CThreadData *pCVar1;
  CThreadData *pCVar2;
  HGLOBAL hMem;
  
  pCVar2 = *(CThreadData **)(this + 0x14);
  while (pCVar2 != (CThreadData *)0x0) {
    pCVar1 = *(CThreadData **)(pCVar2 + 4);
    DeleteValues(this,pCVar2,(HINSTANCE__ *)0x0);
    pCVar2 = pCVar1;
  }
  if (*(DWORD *)this != 0xffffffff) {
    TlsFree(*(DWORD *)this);
  }
  if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
    hMem = GlobalHandle(*(LPCVOID *)(this + 0x10));
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}

