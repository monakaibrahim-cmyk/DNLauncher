// Address: 0x00466d4c
// Name: CThreadSlotData::CThreadSlotData
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CThreadSlotData::CThreadSlotData(void)
   
   Library: Visual Studio 2005 Release */

CThreadSlotData * __thiscall CThreadSlotData::CThreadSlotData(CThreadSlotData *this)

{
  DWORD DVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  DVar1 = TlsAlloc();
  *(DWORD *)this = DVar1;
  if (DVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_004529b4();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return this;
}

