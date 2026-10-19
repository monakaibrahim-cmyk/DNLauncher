// Address: 0x00457e58
// Name: CWnd::OnCommand
// Category: Utility


/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  CNoTrackObject *pCVar1;
  int iVar2;
  uint uVar3;
  CTestCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    CTestCmdUI::CTestCmdUI(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_00457edb:
      iVar2 = (**(code **)(*(int *)this + 0xc))(uVar3,param_1,0,0);
      return iVar2;
    }
  }
  else {
    pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
    if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    if ((*(int *)(pCVar1 + 0x13c) != *(int *)(this + 0x20)) &&
       (iVar2 = ReflectLastMsg((HWND__ *)param_2,(long *)0x0), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_00457edb;
    }
  }
  return 1;
}

