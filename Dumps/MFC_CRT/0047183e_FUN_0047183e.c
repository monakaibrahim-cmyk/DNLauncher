// Address: 0x0047183e
// Name: FUN_0047183e
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_0047183e(void *this,AFX_EVENT *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  AFX_EVENTSINKMAP_ENTRY *pAVar2;
  uint uVar3;
  errno_t eVar4;
  tagDISPPARAMS *_Src;
  undefined4 uVar5;
  tagVARIANT local_44;
  tagDISPPARAMS local_34;
  uint local_20;
  uint local_1c;
  uint local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x47184a;
  local_18[0] = 0;
  local_20 = 0xffffffff;
  pAVar2 = CCmdTarget::GetEventSinkEntry((uint)this,param_1);
  if (pAVar2 == (AFX_EVENTSINKMAP_ENTRY *)0x0) {
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = *param_2;
    param_3 = (undefined4 *)0x0;
    local_1c = (uint)(*(int *)(pAVar2 + 0x24) != -1);
    local_8 = 0;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        local_18[0] = 1;
        if (local_1c == 0) {
          (**(code **)(pAVar2 + 0x10))(local_18);
        }
        else {
          (**(code **)(pAVar2 + 0x10))(param_1);
        }
      }
      else {
        if (iVar1 == 2) {
          if (local_1c == 0) {
            (**(code **)(pAVar2 + 0x14))();
          }
          else {
            (**(code **)(pAVar2 + 0x14))(param_1);
          }
          local_18[0] = 0;
          uVar3 = FUN_00471a20();
          return uVar3;
        }
        if (iVar1 != 3) goto code_r0x00471a20;
        local_18[0] = 1;
        if (local_1c == 0) {
          (**(code **)(pAVar2 + 0x10))(param_2[7],param_2[8],local_18);
        }
        else {
          (**(code **)(pAVar2 + 0x10))(param_1);
        }
      }
      local_18[0] = (uint)(local_18[0] == 0);
      uVar3 = FUN_00471a20();
      return uVar3;
    }
    FUN_0045fe88(&local_44);
    local_34.rgvarg = (VARIANTARG *)0x0;
    _Src = (tagDISPPARAMS *)param_2[2];
    if (local_1c != 0) {
      eVar4 = _memcpy_s(&local_34,0x10,_Src,0x10);
      FUN_00403120(eVar4);
      local_34.cArgs = local_34.cArgs + 1;
      local_34.rgvarg =
           FUN_00452728(-(uint)((int)((ulonglong)local_34.cArgs * 0x10 >> 0x20) != 0) |
                        (uint)((ulonglong)local_34.cArgs * 0x10));
      FUN_004527b0(local_34.rgvarg,local_34.cArgs << 4,*(void **)param_2[2],
                   (local_34.cArgs - 1) * 0x10);
      local_34.rgvarg[local_34.cArgs - 1].n1.n2.vt = 3;
      *(AFX_EVENT **)((int)&local_34.rgvarg[local_34.cArgs - 1].n1 + 8) = param_1;
      _Src = &local_34;
    }
    local_18[0] = CCmdTarget::CallMemberFunc
                            (this,(AFX_DISPMAP_ENTRY *)pAVar2,1,&local_44,_Src,&local_20);
    param_3 = (undefined4 *)(int)(short)local_44.n1._8_2_;
    if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
      _free(local_34.rgvarg);
    }
code_r0x00471a20:
    if ((((int)local_18[0] < 0) && ((uint *)param_2[4] != (uint *)0x0)) && (local_20 != 0xffffffff))
    {
      *(uint *)param_2[4] = local_20;
    }
    param_2[6] = local_18[0];
    return (uint)param_3;
  }
  *param_3 = this;
  iVar1 = *param_2;
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      uVar5 = *(undefined4 *)(pAVar2 + 0x10);
    }
    else {
      if (iVar1 != 2) goto LAB_00471894;
      uVar5 = *(undefined4 *)(pAVar2 + 0x14);
    }
    param_3[1] = uVar5;
  }
LAB_00471894:
  return (uint)(param_3[1] != 0);
}

