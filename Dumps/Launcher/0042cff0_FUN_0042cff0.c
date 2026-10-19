// Address: 0x0042cff0
// Name: FUN_0042cff0
// Category: Launcher


undefined4 * FUN_0042cff0(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004981ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = TiXmlAttribute::vftable;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_4 = 2;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(param_1 + 5,(undefined4 *)param_2,(int)pcVar2 - (int)(param_2 + 1));
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(param_1 + 0xc,(undefined4 *)param_3,(int)pcVar2 - (int)(param_3 + 1));
  param_1[4] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  ExceptionList = local_c;
  return param_1;
}

