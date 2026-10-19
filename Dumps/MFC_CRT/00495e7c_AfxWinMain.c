// Address: 0x00495e7c
// Name: AfxWinMain
// Category: MFC_CRT


undefined4 AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,wchar_t *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  piVar2 = (int *)FUN_0046419a();
  pAVar3 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar3 + 4);
  iVar4 = AfxWinInit(param_1,param_2,param_3,param_4);
  if ((iVar4 != 0) &&
     ((piVar1 == (int *)0x0 || (iVar4 = (**(code **)(*piVar1 + 0x90))(), iVar4 != 0)))) {
    iVar4 = (**(code **)(*piVar2 + 0x50))();
    if (iVar4 == 0) {
      if (piVar2[8] != 0) {
        (**(code **)(*(int *)piVar2[8] + 0x60))();
      }
      uVar5 = (**(code **)(*piVar2 + 0x68))();
    }
    else {
      uVar5 = (**(code **)(*piVar2 + 0x54))();
    }
  }
  AfxWinTerm();
  return uVar5;
}

