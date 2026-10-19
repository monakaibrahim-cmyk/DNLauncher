// Address: 0x004650bf
// Name: COccManager::CreateContainer
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class COleControlContainer * __thiscall COccManager::CreateContainer(class CWnd
   *)
   
   Library: Visual Studio 2005 Release */

COleControlContainer * __thiscall COccManager::CreateContainer(COccManager *this,CWnd *param_1)

{
  COleControlContainer *this_00;
  COleControlContainer *pCVar1;
  
  this_00 = FUN_00452728(0x80);
  pCVar1 = (COleControlContainer *)0x0;
  if (this_00 != (COleControlContainer *)0x0) {
    pCVar1 = (COleControlContainer *)COleControlContainer::COleControlContainer(this_00,param_1);
  }
  return pCVar1;
}

