// Address: 0x00466b16
// Name: CThreadLocalObject::GetDataNA
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(void)
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(CThreadLocalObject *this)

{
  CNoTrackObject *pCVar1;
  
  if ((*(int *)this != 0) && (DAT_004cab80 != (CThreadSlotData *)0x0)) {
    pCVar1 = CThreadSlotData::GetThreadValue(DAT_004cab80,*(int *)this);
    return pCVar1;
  }
  return (CNoTrackObject *)0x0;
}

