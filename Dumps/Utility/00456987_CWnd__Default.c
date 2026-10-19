// Address: 0x00456987
// Name: CWnd::Default
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CWnd::Default(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::Default(CWnd *this)

{
  CNoTrackObject *pCVar1;
  long lVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  lVar2 = (**(code **)(*(int *)this + 0x110))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100));
  return lVar2;
}

