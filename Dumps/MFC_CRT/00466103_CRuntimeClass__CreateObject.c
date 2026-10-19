// Address: 0x00466103
// Name: CRuntimeClass::CreateObject
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CRuntimeClass::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

CObject * __thiscall CRuntimeClass::CreateObject(CRuntimeClass *this)

{
  CObject *pCVar1;
  
  if (this == (CRuntimeClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(this + 0xc) == 0) {
    pCVar1 = (CObject *)0x0;
  }
  else {
    pCVar1 = (CObject *)(**(code **)(this + 0xc))();
  }
  return pCVar1;
}

