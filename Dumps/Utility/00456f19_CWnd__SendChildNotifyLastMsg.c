// Address: 0x00456f19
// Name: CWnd::SendChildNotifyLastMsg
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SendChildNotifyLastMsg(long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::SendChildNotifyLastMsg(CWnd *this,long *param_1)

{
  CNoTrackObject *pCVar1;
  int iVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar2 = (**(code **)(*(int *)this + 0x118))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100),param_1);
  return iVar2;
}

