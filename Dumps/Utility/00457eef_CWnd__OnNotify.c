// Address: 0x00457eef
// Name: CWnd::OnNotify
// Category: Utility


/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  HWND hWnd;
  uint uVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  long *local_10;
  long local_c;
  uint local_8;
  
  hWnd = *(HWND *)param_2;
  local_8 = ::GetDlgCtrlID(hWnd);
  local_8 = local_8 & 0xffff;
  uVar1 = *(uint *)(param_2 + 8);
  pCVar2 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((*(int *)(pCVar2 + 0x13c) != *(int *)(this + 0x20)) &&
     (iVar3 = ReflectLastMsg(hWnd,param_3), iVar3 == 0)) {
    local_10 = param_3;
    local_c = param_2;
    iVar3 = (**(code **)(*(int *)this + 0xc))(local_8,uVar1 & 0xffff | 0x4e0000,&local_10,0);
    return iVar3;
  }
  return 1;
}

