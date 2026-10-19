// Address: 0x0044f120
// Name: FUN_0044f120
// Category: Utility


void __cdecl FUN_0044f120(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_4;
  
  uVar2 = param_1[0x1a];
  local_4 = 0;
  if ((uVar2 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar2 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid sBIT after IDAT");
      FUN_0044eb90(param_1,param_3);
      return;
    }
    if ((uVar2 & 2) != 0) {
      FUN_004451d0((int)param_1,"Out of place sBIT chunk");
    }
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    FUN_004451d0((int)param_1,"Duplicate sBIT chunk");
    FUN_0044eb90(param_1,param_3);
    return;
  }
  uVar2 = 3;
  if (*(char *)((int)param_1 + 0x126) != '\x03') {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x12a);
  }
  if ((param_3 == uVar2) && (param_3 < 5)) {
    FUN_0044da60(param_1,&local_4,uVar2);
    iVar3 = FUN_0044eb90(param_1,0);
    if (iVar3 == 0) {
      piVar1 = param_1 + 0x5f;
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        *(undefined1 *)((int)param_1 + 0x17f) = (undefined1)local_4;
        *(undefined1 *)piVar1 = (undefined1)local_4;
        *(undefined1 *)((int)param_1 + 0x17d) = (undefined1)local_4;
        *(undefined1 *)((int)param_1 + 0x17e) = (undefined1)local_4;
        *(undefined1 *)(param_1 + 0x60) = local_4._1_1_;
        FUN_00451f80((int)param_1,param_2,piVar1);
        return;
      }
      *(undefined1 *)piVar1 = (undefined1)local_4;
      *(undefined1 *)((int)param_1 + 0x17d) = local_4._1_1_;
      *(undefined1 *)((int)param_1 + 0x17e) = local_4._2_1_;
      *(undefined1 *)(param_1 + 0x60) = local_4._3_1_;
      FUN_00451f80((int)param_1,param_2,piVar1);
      return;
    }
  }
  else {
    FUN_004451d0((int)param_1,"Incorrect sBIT chunk length");
    FUN_0044eb90(param_1,param_3);
  }
  return;
}

