// Address: 0x0046fee8
// Name: COleControlContainer::OnUIActivate
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::OnUIActivate(class COleControlSite *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::OnUIActivate(COleControlContainer *this,COleControlSite *param_1)

{
  COleControlSite *pCVar1;
  
  pCVar1 = *(COleControlSite **)(this + 0x68);
  if ((pCVar1 != (COleControlSite *)0x0) && (pCVar1 != param_1)) {
    (**(code **)(**(int **)(pCVar1 + 0x54) + 0x18))(*(int **)(pCVar1 + 0x54));
  }
  *(COleControlSite **)(this + 0x68) = param_1;
  return;
}

