// Address: 0x0046b78a
// Name: COleControlSite::QuickActivate
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::QuickActivate(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::QuickActivate(COleControlSite *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_80;
  COleControlSite *local_7c;
  undefined4 local_78;
  COleControlSite *local_74;
  COleControlSite *local_70;
  uint local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  int *local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  VARIANTARG local_28;
  int local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x46b796;
  puVar1 = *(undefined4 **)(this + 0x50);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_14[0] = (int *)0x0;
    local_18 = 0;
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_004ab76c,local_14);
    if (iVar3 < 0) {
      return local_18;
    }
    if (local_14[0] != (int *)0x0) {
      local_7c = this + 200;
      local_74 = this + 0xd8;
      local_70 = this + 0xdc;
      local_80 = 0x40;
      local_78 = 0;
      local_5c = 0;
      local_50 = 0;
      local_4c = 0;
      FUN_0045fe88(&local_28);
      local_8 = 0;
      if (*(int *)(this + 0x20) != 0) {
        piVar2 = *(int **)(*(int *)(this + 0x20) + 0x20);
        local_6c = 0;
        if (piVar2 != (int *)0x0) {
          do {
            (**(code **)(*piVar2 + 0x104))
                      (this,*(undefined4 *)((int)&DAT_004a3f30 + uVar4),&local_28);
            if (local_28.n1._8_2_ != 0) {
              local_6c = local_6c | *(uint *)((int)&DAT_004a3f34 + uVar4);
            }
            uVar4 = uVar4 + 8;
          } while (uVar4 < 0x40);
          (**(code **)(*piVar2 + 0x104))(this,0xfffffd40,&local_28);
          local_68 = (undefined4 *)local_28.n1._8_4_;
          (**(code **)(*piVar2 + 0x104))(this,0xfffffd43,&local_28);
          local_64 = (undefined4 *)local_28.n1._8_4_;
          (**(code **)(*piVar2 + 0x104))(this,0xfffffd34,&local_28);
          local_58 = (int)(short)local_28.n1._8_2_;
          (**(code **)(*piVar2 + 0x104))(this,0xfffffd3f,&local_28);
          local_54 = (undefined4 *)local_28.n1._8_4_;
          (**(code **)(*piVar2 + 0x104))(this,0xfffffd41,&local_28);
          iVar3 = (*(code *)**(undefined4 **)local_28.n1._8_4_)
                            (local_28.n1._8_4_,&DAT_004ab7bc,&local_60);
          if (iVar3 < 0) {
            local_60 = (int *)0x0;
          }
          local_40 = 0x18;
          iVar3 = (**(code **)(*local_14[0] + 0xc))(local_14[0],&local_80,&local_40);
          if (-1 < iVar3) {
            *(undefined4 *)(this + 0x70) = local_3c;
            *(undefined4 *)(this + 0x60) = local_34;
            *(undefined4 *)(this + 100) = local_30;
            local_18 = 1;
          }
          (**(code **)(*local_14[0] + 8))(local_14[0]);
          if (local_60 != (int *)0x0) {
            (**(code **)(*local_60 + 8))(local_60);
          }
          VariantClear(&local_28);
          return local_18;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

