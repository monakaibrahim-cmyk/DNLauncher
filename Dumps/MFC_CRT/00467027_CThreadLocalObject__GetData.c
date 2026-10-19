// Address: 0x00467027
// Name: CThreadLocalObject::GetData
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall
CThreadLocalObject::GetData(CThreadLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  int iVar1;
  CNoTrackObject *pCVar2;
  
  if (param_1 == (_func_CNoTrackObject_ptr *)0x0) {
LAB_00467041:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)this == 0) {
    if (DAT_004cab80 == (CThreadSlotData *)0x0) {
      DAT_004cab80 = (CThreadSlotData *)
                     CThreadSlotData::CThreadSlotData((CThreadSlotData *)&DAT_004cab84);
      if (DAT_004cab80 == (CThreadSlotData *)0x0) goto LAB_00467041;
    }
    iVar1 = CThreadSlotData::AllocSlot(DAT_004cab80);
    *(int *)this = iVar1;
    if (iVar1 == 0) goto LAB_00467041;
  }
  pCVar2 = CThreadSlotData::GetThreadValue(DAT_004cab80,*(int *)this);
  if (pCVar2 == (CNoTrackObject *)0x0) {
    pCVar2 = (*param_1)();
    CThreadSlotData::SetValue(DAT_004cab80,*(int *)this,pCVar2);
  }
  return pCVar2;
}

