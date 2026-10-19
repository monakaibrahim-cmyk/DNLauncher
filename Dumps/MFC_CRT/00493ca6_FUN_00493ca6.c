// Address: 0x00493ca6
// Name: FUN_00493ca6
// Category: MFC_CRT


uint __thiscall FUN_00493ca6(void *this,FILE *param_1)

{
  int *piVar1;
  FILE *_File;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  DWORD *pDVar6;
  undefined2 extraout_var;
  size_t _SrcSizeInBytes;
  undefined4 local_8;
  
  _File = param_1;
  local_8 = this;
  if ((param_1->_flag & 0x40) == 0) {
    iVar3 = __fileno(param_1);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
      puVar5 = &DAT_004c3d70;
    }
    else {
      iVar3 = __fileno(_File);
      uVar4 = __fileno(_File);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 0) {
      piVar1 = &_File->_cnt;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        pDVar6 = (DWORD *)FUN_00488289(_File);
      }
      else {
        pDVar6 = (DWORD *)(uint)(byte)*_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
      }
      if (pDVar6 != (DWORD *)0xffffffff) {
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        param_1 = (FILE *)CONCAT31(param_1._1_3_,(char)pDVar6);
        if (*piVar1 < 0) {
          pDVar6 = (DWORD *)FUN_00488289(_File);
        }
        else {
          pDVar6 = (DWORD *)(uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (pDVar6 != (DWORD *)0xffffffff) {
          param_1._0_2_ = CONCAT11((char)pDVar6,param_1._0_1_);
          param_1 = (FILE *)(uint)(ushort)param_1;
LAB_00493d46:
          return CONCAT22((short)((uint)pDVar6 >> 0x10),(ushort)param_1);
        }
      }
LAB_00493d1c:
      return CONCAT22((short)((uint)pDVar6 >> 0x10),0xffff);
    }
    if ((_File->_flag & 0x40) == 0) {
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_004c3d70;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar3 >> 5]);
      }
      if ((puVar5[4] & 0x80) != 0) {
        _SrcSizeInBytes = 1;
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          pDVar6 = (DWORD *)FUN_00488289(_File);
        }
        else {
          pDVar6 = (DWORD *)(uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (pDVar6 != (DWORD *)0xffffffff) {
          local_8 = (void *)CONCAT31(local_8._1_3_,(char)pDVar6);
          iVar3 = _isleadbyte((uint)pDVar6 & 0xff);
          if (iVar3 != 0) {
            piVar1 = &_File->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar4 = FUN_00488289(_File);
            }
            else {
              uVar4 = (uint)(byte)*_File->_ptr;
              _File->_ptr = _File->_ptr + 1;
            }
            if (uVar4 == 0xffffffff) {
              iVar3 = _ungetc((int)(char)local_8,_File);
              return CONCAT22((short)((uint)iVar3 >> 0x10),0xffff);
            }
            local_8._0_2_ = CONCAT11((char)uVar4,(char)local_8);
            _SrcSizeInBytes = 2;
          }
          pDVar6 = (DWORD *)_mbtowc((wchar_t *)&param_1,(char *)&local_8,_SrcSizeInBytes);
          if (pDVar6 != (DWORD *)0xffffffff) goto LAB_00493d46;
          pDVar6 = FUN_0047b849();
          *pDVar6 = 0x2a;
        }
        goto LAB_00493d1c;
      }
    }
  }
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    uVar2 = FUN_00495528(_File);
    uVar4 = CONCAT22(extraout_var,uVar2);
  }
  else {
    uVar4 = (uint)*(ushort *)_File->_ptr;
    _File->_ptr = (char *)((int)_File->_ptr + 2);
  }
  return uVar4;
}

