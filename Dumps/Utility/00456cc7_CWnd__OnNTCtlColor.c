// Address: 0x00456cc7
// Name: CWnd::OnNTCtlColor
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnNTCtlColor(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnNTCtlColor(CWnd *this,uint param_1,long param_2)

{
  CNoTrackObject *pCVar1;
  long lVar2;
  long local_10;
  uint local_c;
  int local_8;
  
  local_c = param_1;
  local_10 = param_2;
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  local_8 = *(int *)(pCVar1 + 0x5c) + -0x132;
  lVar2 = (**(code **)(*(int *)this + 0x108))(0x19,0,&local_10);
  return lVar2;
}

