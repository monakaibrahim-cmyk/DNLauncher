// Address: 0x0045c736
// Name: CCmdTarget::OnCmdMsg
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CCmdTarget::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  void *pvVar1;
  bool bVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int *piVar6;
  AFX_MSGMAP_ENTRY *pAVar7;
  uint uVar8;
  
  if (param_2 == -2) {
    pAVar3 = AfxGetModuleState();
    if (*(int *)(pAVar3 + 0x3c) != 0) {
      pAVar3 = AfxGetModuleState();
      iVar4 = (**(code **)(**(int **)(pAVar3 + 0x3c) + 4))(this,param_1,param_3,param_4);
      return iVar4;
    }
LAB_0045c74f:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (param_2 == -3) {
    param_2 = 0;
    if (param_3 != (void *)0x0) {
      pvVar1 = *(void **)((int)param_3 + 0x30);
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))();
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return param_2;
        }
        if (param_2 != 0) {
          return param_2;
        }
        piVar6 = (int *)puVar5[1];
        while (((piVar6[1] != 0 && (piVar6[2] != 0)) && (param_2 == 0))) {
          if (param_1 == piVar6[1]) {
            if (pvVar1 == (void *)0x0) {
              if (*piVar6 == 0) {
LAB_0045c7d1:
                *(int *)((int)param_3 + 4) = piVar6[2];
                param_2 = 1;
              }
            }
            else if (((void *)*piVar6 != (void *)0x0) &&
                    (bVar2 = _IsEqualGUID(pvVar1,(void *)*piVar6), CONCAT31(extraout_var,bVar2) != 0
                    )) goto LAB_0045c7d1;
          }
          piVar6 = piVar6 + 3;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while( true );
    }
    goto LAB_0045c74f;
  }
  if (param_2 != -1) {
    uVar8 = (uint)param_2 >> 0x10;
    param_2 = param_2 & 0xffff;
    if (uVar8 != 0) goto LAB_0045c80a;
  }
  uVar8 = 0x111;
LAB_0045c80a:
  piVar6 = (int *)(**(code **)(*(int *)this + 0x28))();
  while( true ) {
    if (*piVar6 == 0) {
      return 0;
    }
    pAVar7 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar6[1],uVar8,param_2,param_1);
    if (pAVar7 != (AFX_MSGMAP_ENTRY *)0x0) break;
    piVar6 = (int *)(*(code *)*piVar6)();
  }
  iVar4 = _AfxDispatchCmdMsg(this,param_1,param_2,*(_func_void **)(pAVar7 + 0x14),param_3,
                             *(uint *)(pAVar7 + 0x10),param_4);
  return iVar4;
}

