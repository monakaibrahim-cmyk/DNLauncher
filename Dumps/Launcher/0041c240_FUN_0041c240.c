// Address: 0x0041c240
// Name: FUN_0041c240
// Category: Launcher


void __thiscall
FUN_0041c240(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  uVar3 = *(undefined4 *)((int)this + 4);
  pAVar2 = AfxGetModuleState();
  FUN_0041c280((void *)**(undefined4 **)(pAVar2 + 0x78),uVar3,param_2,uVar1,param_3,param_4,param_5)
  ;
  return;
}

