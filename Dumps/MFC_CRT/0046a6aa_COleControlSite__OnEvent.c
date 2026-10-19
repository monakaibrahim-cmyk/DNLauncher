// Address: 0x0046a6aa
// Name: COleControlSite::OnEvent
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall COleControlSite::OnEvent(struct AFX_EVENT *)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::OnEvent(COleControlSite *this,AFX_EVENT *param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0x28) != 0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0x28) + 0xc))
                        (*(undefined4 *)(this + 0x2c),0xfffffffe,param_1,0), iVar1 != 0)) {
    return 1;
  }
  iVar1 = *(int *)(this + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x20) + 0xc))
                      (*(undefined4 *)(this + 0x2c),0xfffffffe,param_1,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

