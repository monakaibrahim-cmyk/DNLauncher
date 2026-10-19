// Address: 0x0043cdc0
// Name: FUN_0043cdc0
// Category: Utility


void __cdecl FUN_0043cdc0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *_Src;
  int iVar3;
  int *piVar4;
  int local_4;
  
  piVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_0043d870();
  puVar2 = (undefined4 *)FUN_00443750(piVar1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = piVar1;
    FUN_00443790();
    *(undefined4 *)(*piVar1 + 0x14) = 0x36;
    *(undefined4 *)(*piVar1 + 0x18) = 0;
    (**(code **)*piVar1)(piVar1,piVar4);
  }
  *puVar2 = FUN_0043c2f0;
  puVar2[1] = FUN_0043c420;
  puVar2[2] = FUN_0043c4c0;
  puVar2[3] = FUN_0043c570;
  puVar2[4] = FUN_0043c620;
  puVar2[5] = FUN_0043c690;
  puVar2[6] = FUN_0043c700;
  puVar2[7] = &LAB_0043c9e0;
  puVar2[8] = &LAB_0043cb20;
  puVar2[9] = FUN_0043cc70;
  puVar2[10] = &LAB_0043cd80;
  puVar2[0xc] = 1000000000;
  puVar2[0xb] = local_4;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  piVar1[1] = (int)puVar2;
  _Src = _getenv("JPEGMEM");
  if (_Src != (char *)0x0) {
    param_1 = (int *)CONCAT31(param_1._1_3_,0x78);
    iVar3 = FID_conflict__sscanf(_Src,"%ld%c",&local_4,&param_1);
    if (0 < iVar3) {
      if (((char)param_1 == 'm') || ((char)param_1 == 'M')) {
        puVar2[0xb] = local_4 * 1000000;
        return;
      }
      puVar2[0xb] = local_4 * 1000;
    }
  }
  return;
}

