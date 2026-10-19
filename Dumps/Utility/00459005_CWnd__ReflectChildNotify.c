// Address: 0x00459005
// Name: CWnd::ReflectChildNotify
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CWnd::ReflectChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::ReflectChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined1 local_10 [4];
  long *local_c;
  long local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      iVar1 = CCmdTarget::OnCmdMsg
                        ((CCmdTarget *)this,0,param_2 >> 0x10 | 0xbd110000,(void *)0x0,
                         (AFX_CMDHANDLERINFO *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if (0x2a < param_1) {
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_00459099;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        iVar1 = CCmdTarget::OnCmdMsg
                          ((CCmdTarget *)this,0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                           &local_c,(AFX_CMDHANDLERINFO *)0x0);
        return iVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_00459099:
    iVar1 = OnWndMsg(this,param_1 + 0xbc00,param_2,param_3,param_4);
    return iVar1;
  }
  if (param_1 - 0x132 < 7) {
    local_8 = param_1 - 0x132;
    local_c = (long *)param_2;
    iVar1 = OnWndMsg(this,0xbc19,0,(long)local_10,param_4);
    if (*param_4 != 0) {
      return iVar1;
    }
  }
  return 0;
}

