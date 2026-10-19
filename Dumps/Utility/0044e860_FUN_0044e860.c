// Address: 0x0044e860
// Name: FUN_0044e860
// Category: Utility


void __cdecl FUN_0044e860(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint local_38 [14];
  
  local_38[7] = 0;
  local_38[8] = 4;
  local_38[9] = 0;
  local_38[10] = 2;
  local_38[0xb] = 0;
  local_38[0xc] = 1;
  local_38[0xd] = 0;
  local_38[0] = 8;
  local_38[1] = 8;
  local_38[2] = 4;
  local_38[3] = 4;
  local_38[4] = 2;
  local_38[5] = 2;
  local_38[6] = 1;
  param_1[0x1e] = 0;
  FUN_0044c400(param_1);
  if (*(char *)((int)param_1 + 0x123) == '\0') {
    iVar6 = param_1[0x32];
    param_1[0x34] = param_1[0x33];
    param_1[0x38] = iVar6;
    param_1[0x37] = param_1[0x36] + 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
      param_1[0x34] = param_1[0x33] + 7U >> 3;
    }
    else {
      param_1[0x34] = param_1[0x33];
    }
    iVar6 = param_1[0x32];
    uVar3 = ((iVar6 - local_38[*(byte *)(param_1 + 0x49) + 7]) + -1 +
            local_38[*(byte *)(param_1 + 0x49)]) / local_38[*(byte *)(param_1 + 0x49)];
    bVar1 = *(byte *)((int)param_1 + 0x129);
    param_1[0x38] = uVar3;
    if (bVar1 < 8) {
      param_1[0x37] = (bVar1 * uVar3 + 7 >> 3) + 1;
    }
    else {
      param_1[0x37] = (bVar1 >> 3) * uVar3 + 1;
    }
  }
  uVar5 = param_1[0x1c];
  uVar3 = (uint)*(byte *)((int)param_1 + 0x129);
  if (((uVar5 & 4) != 0) && (*(byte *)((int)param_1 + 0x127) < 8)) {
    uVar3 = 8;
  }
  if ((uVar5 & 0x1000) != 0) {
    cVar2 = *(char *)((int)param_1 + 0x126);
    if (cVar2 == '\x03') {
      uVar3 = (uint)(*(short *)((int)param_1 + 0x11a) != 0) * 8 + 0x18;
    }
    else if (cVar2 == '\0') {
      if (uVar3 < 8) {
        uVar3 = 8;
      }
      if (*(short *)((int)param_1 + 0x11a) != 0) {
        uVar3 = uVar3 * 2;
      }
    }
    else if ((cVar2 == '\x02') && (*(short *)((int)param_1 + 0x11a) != 0)) {
      uVar3 = (uVar3 * 4) / 3;
    }
  }
  if ((uVar5 & 0x8000) != 0) {
    cVar2 = *(char *)((int)param_1 + 0x126);
    if (cVar2 == '\x03') {
      uVar3 = 0x20;
    }
    else if (cVar2 == '\0') {
      uVar3 = ((8 < uVar3) - 1 & 0xfffffff0) + 0x20;
    }
    else if (cVar2 == '\x02') {
      uVar3 = ((0x20 < uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if ((uVar5 & 0x4000) != 0) {
    if ((((*(short *)((int)param_1 + 0x11a) == 0) || ((uVar5 & 0x1000) == 0)) &&
        ((uVar5 & 0x8000) == 0)) && (cVar2 = *(char *)((int)param_1 + 0x126), cVar2 != '\x04')) {
      if ((int)uVar3 < 9) {
        uVar3 = (uint)(cVar2 == '\x06') * 8 + 0x18;
      }
      else {
        uVar3 = (-(uint)(cVar2 != '\x06') & 0xfffffff0) + 0x40;
      }
    }
    else {
      uVar3 = ((0x10 < (int)uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if (((uVar5 & 0x100000) != 0) &&
     (uVar5 = (uint)*(byte *)((int)param_1 + 0x65) * (uint)*(byte *)(param_1 + 0x19),
     uVar5 - uVar3 != 0 && (int)uVar3 <= (int)uVar5)) {
    uVar3 = uVar5;
  }
  uVar5 = iVar6 + 7U & 0xfffffff8;
  if ((int)uVar3 < 8) {
    uVar5 = uVar3 * uVar5 + 7 >> 3;
  }
  else {
    uVar5 = (uVar3 >> 3) * uVar5;
  }
  pvVar4 = FUN_0044d960(param_1,((int)(uVar3 + 7) >> 3) + 0x41 + uVar5);
  param_1[0x94] = (int)pvVar4;
  param_1[0x3b] = (int)pvVar4 + 0x20;
  if (param_1[0x36] == -1) {
    FUN_00445110(param_1,"Row has too many bytes to allocate in memory.");
  }
  pvVar4 = FUN_0044d960(param_1,param_1[0x36] + 1);
  param_1[0x3a] = (int)pvVar4;
  FUN_0044d8d0(param_1,pvVar4,0,param_1[0x36] + 1);
  param_1[0x1b] = param_1[0x1b] | 0x40;
  return;
}

