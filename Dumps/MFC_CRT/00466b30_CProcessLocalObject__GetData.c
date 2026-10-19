// Address: 0x00466b30
// Name: CProcessLocalObject::GetData
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CProcessLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall
CProcessLocalObject::GetData(CProcessLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  CNoTrackObject *pCVar1;
  
  if (*(int *)this == 0) {
    AfxLockGlobals(0x10);
    if (*(int *)this == 0) {
      pCVar1 = (*param_1)();
      *(CNoTrackObject **)this = pCVar1;
    }
    AfxUnlockGlobals(0x10);
  }
  return *(CNoTrackObject **)this;
}

