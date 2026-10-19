// Address: 0x0046a2fa
// Name: COleControlSite::GetEventIID
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall COleControlSite::GetEventIID(struct _GUID *)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::GetEventIID(COleControlSite *this,_GUID *param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar5;
  undefined4 local_24;
  undefined1 local_20 [4];
  ulong *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  param_1->Data1 = DAT_004ab61c;
  uVar2 = DAT_004ab620._2_2_;
  param_1->Data2 = (undefined2)DAT_004ab620;
  param_1->Data3 = uVar2;
  *(undefined4 *)param_1->Data4 = DAT_004ab624;
  *(undefined4 *)(param_1->Data4 + 4) = DAT_004ab628;
  local_10 = (int *)0x0;
  iVar4 = (**(code **)**(undefined4 **)(this + 0x50))
                    (*(undefined4 **)(this + 0x50),&DAT_004ab81c,&local_10);
  if (-1 < iVar4) {
    (**(code **)(*local_10 + 0x10))(local_10,1,param_1);
    (**(code **)(*local_10 + 8))(local_10);
  }
  local_18 = (int *)0x0;
  bVar3 = _IsEqualGUID(param_1,&DAT_004ab61c);
  if ((CONCAT31(extraout_var,bVar3) != 0) &&
     (iVar4 = (**(code **)**(undefined4 **)(this + 0x50))
                        (*(undefined4 **)(this + 0x50),&DAT_004ab82c,&local_18), -1 < iVar4)) {
    local_8 = (int *)0x0;
    iVar4 = (**(code **)(*local_18 + 0xc))(local_18,&local_8);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*local_8 + 0xc))(local_8,&local_14);
      if (-1 < iVar4) {
        uVar5 = 0;
        if (*(short *)(local_14 + 0x30) != 0) {
          do {
            iVar4 = (**(code **)(*local_8 + 0x24))(local_8,uVar5,local_20);
            if ((-1 < iVar4) && ((local_20[0] & 7) == 3)) {
              local_c = (int *)0x0;
              iVar4 = (**(code **)(*local_8 + 0x20))(local_8,uVar5,&local_24);
              if ((-1 < iVar4) &&
                 (iVar4 = (**(code **)(*local_8 + 0x38))(local_8,local_24,&local_c), -1 < iVar4)) {
                iVar4 = (**(code **)(*local_c + 0xc))(local_c,&local_1c);
                if (-1 < iVar4) {
                  param_1->Data1 = *local_1c;
                  uVar1 = local_1c[1];
                  param_1->Data2 = (short)uVar1;
                  param_1->Data3 = (short)(uVar1 >> 0x10);
                  *(ulong *)param_1->Data4 = local_1c[2];
                  *(ulong *)(param_1->Data4 + 4) = local_1c[3];
                  (**(code **)(*local_c + 0x4c))(local_c,local_1c);
                }
                (**(code **)(*local_c + 8))(local_c);
              }
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(ushort *)(local_14 + 0x30));
        }
        (**(code **)(*local_8 + 0x4c))(local_8,local_14);
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
    (**(code **)(*local_18 + 8))(local_18);
  }
  bVar3 = _IsEqualGUID(param_1,&DAT_004ab61c);
  return (uint)(CONCAT31(extraout_var_00,bVar3) == 0);
}

