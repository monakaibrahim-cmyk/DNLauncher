// Address: 0x0044def0
// Name: FUN_0044def0
// Category: Utility


void __cdecl FUN_0044def0(int param_1,byte *param_2,uint param_3)

{
  size_t _Size;
  uint _Size_00;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *_Src;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3 == 0xff) {
    bVar2 = *(byte *)(param_1 + 0x10b);
    if (bVar2 < 8) {
      _Size = (uint)bVar2 * *(int *)(param_1 + 200) + 7 >> 3;
    }
    else {
      _Size = (uint)(bVar2 >> 3) * *(int *)(param_1 + 200);
    }
    _memcpy(param_2,(void *)(*(int *)(param_1 + 0xec) + 1),_Size);
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x10b);
  _Src = (byte *)(*(int *)(param_1 + 0xec) + 1);
  if (bVar2 == 1) {
    iVar3 = *(int *)(param_1 + 200);
    local_10 = 0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar1 = 7;
      local_4 = 0;
      local_8 = -1;
      iVar4 = iVar1;
    }
    else {
      iVar1 = 0;
      local_4 = 7;
      local_8 = 1;
      iVar4 = iVar1;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((local_10 & param_3) != 0) {
        bVar2 = (byte)iVar1;
        *param_2 = (byte)(0x7f7f >> (7 - bVar2 & 0x1f)) & *param_2 |
                   (*_Src >> (bVar2 & 0x1f) & 1) << (bVar2 & 0x1f);
      }
      if (iVar1 == local_4) {
        _Src = _Src + 1;
        param_2 = param_2 + 1;
        iVar1 = iVar4;
      }
      else {
        iVar1 = iVar1 + local_8;
      }
      if (local_10 == 1) {
        local_10 = 0x80;
      }
      else {
        local_10 = (int)local_10 >> 1;
      }
    }
  }
  else if (bVar2 == 2) {
    local_c = *(int *)(param_1 + 200);
    local_10 = 0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar3 = 6;
      local_4 = 0;
      local_8 = -2;
    }
    else {
      iVar3 = 0;
      local_4 = 6;
      local_8 = 2;
    }
    iVar1 = iVar3;
    if (local_c != 0) {
      do {
        if ((local_10 & param_3) != 0) {
          bVar2 = (byte)iVar1;
          *param_2 = (byte)(0x3f3f >> (6 - bVar2 & 0x1f)) & *param_2 |
                     (*_Src >> (bVar2 & 0x1f) & 3) << (bVar2 & 0x1f);
        }
        if (iVar1 == local_4) {
          _Src = _Src + 1;
          param_2 = param_2 + 1;
          iVar1 = iVar3;
        }
        else {
          iVar1 = iVar1 + local_8;
        }
        if (local_10 == 1) {
          local_10 = 0x80;
        }
        else {
          local_10 = (int)local_10 >> 1;
        }
        local_c = local_c + -1;
      } while (local_c != 0);
      return;
    }
  }
  else if (bVar2 == 4) {
    local_4 = *(int *)(param_1 + 200);
    local_10 = 0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar3 = 4;
      local_c = 0;
      local_8 = -4;
    }
    else {
      iVar3 = 0;
      local_c = 4;
      local_8 = 4;
    }
    iVar1 = iVar3;
    if (local_4 != 0) {
      do {
        if ((local_10 & param_3) != 0) {
          bVar2 = (byte)iVar1;
          *param_2 = (byte)(0xf0f >> (4 - bVar2 & 0x1f)) & *param_2 |
                     (*_Src >> (bVar2 & 0x1f) & 0xf) << (bVar2 & 0x1f);
        }
        if (iVar1 == local_c) {
          _Src = _Src + 1;
          param_2 = param_2 + 1;
          iVar1 = iVar3;
        }
        else {
          iVar1 = iVar1 + local_8;
        }
        if (local_10 == 1) {
          local_10 = 0x80;
        }
        else {
          local_10 = (int)local_10 >> 1;
        }
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      return;
    }
  }
  else {
    local_10 = *(int *)(param_1 + 200);
    _Size_00 = (uint)(bVar2 >> 3);
    bVar2 = 0x80;
    if (local_10 != 0) {
      do {
        if (((byte)param_3 & bVar2) != 0) {
          _memcpy(param_2,_Src,_Size_00);
        }
        _Src = _Src + _Size_00;
        param_2 = param_2 + _Size_00;
        if (bVar2 == 1) {
          bVar2 = 0x80;
        }
        else {
          bVar2 = bVar2 >> 1;
        }
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      return;
    }
  }
  return;
}

