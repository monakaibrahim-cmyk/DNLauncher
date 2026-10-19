// Address: 0x0045c5fe
// Name: _AfxDispatchCmdMsg
// Category: Utility


/* Library Function - Single Match
    int __stdcall _AfxDispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall
   CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int _AfxDispatchCmdMsg(CCmdTarget *param_1,uint param_2,int param_3,_func_void *param_4,
                      void *param_5,uint param_6,AFX_CMDHANDLERINFO *param_7)

{
  uint uVar1;
  
  if (param_1 == (CCmdTarget *)0x0) {
LAB_0045c608:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  uVar1 = 1;
  if (param_7 != (AFX_CMDHANDLERINFO *)0x0) {
    *(CCmdTarget **)param_7 = param_1;
    *(_func_void **)(param_7 + 4) = param_4;
    return 1;
  }
  switch(param_6) {
  case 0x38:
    (*param_4)();
    break;
  case 0x39:
    uVar1 = (*param_4)();
    break;
  case 0x3a:
    param_5 = (void *)param_2;
    goto LAB_0045c651;
  case 0x3b:
    param_5 = (void *)param_2;
    goto LAB_0045c6f2;
  case 0x3c:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3d:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    uVar1 = (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3e:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3f:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    uVar1 = (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x40:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    (*param_4)(param_5);
    goto LAB_0045c6c5;
  case 0x41:
    if (param_5 == (void *)0x0) goto LAB_0045c608;
    (*param_4)(param_5,param_2);
LAB_0045c6c5:
    uVar1 = (uint)(*(int *)((int)param_5 + 0x1c) == 0);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    break;
  case 0x42:
LAB_0045c651:
    (*param_4)(param_5);
    break;
  case 0x43:
LAB_0045c6f2:
    uVar1 = (*param_4)(param_5);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

