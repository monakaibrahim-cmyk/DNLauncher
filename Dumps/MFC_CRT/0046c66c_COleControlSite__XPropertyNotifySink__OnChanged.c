// Address: 0x0046c66c
// Name: COleControlSite::XPropertyNotifySink::OnChanged
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XPropertyNotifySink::OnChanged(long)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XPropertyNotifySink::OnChanged(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  COleControlSite *this;
  int in_stack_00000008;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  BSTR local_48;
  BSTR local_44;
  BSTR local_40;
  undefined1 local_2c [16];
  AFX_MAINTAIN_STATE2 local_1c [4];
  int local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  lVar2 = param_1;
  uStack_4 = 0x60;
  local_8 = 0x46c678;
  this = (COleControlSite *)(param_1 + -0xd8);
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_1c,*(AFX_MODULE_STATE **)(param_1 + -0xbc));
  local_8 = 0;
  if (*(int *)(lVar2 + -0x50) == 0) {
    if (*(int *)(lVar2 + -0x48) == 0) {
      local_6c = in_stack_00000008;
      local_70 = 2;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      OnEvent(this,(AFX_EVENT *)&local_70);
      iVar3 = local_58;
      if (local_58 != 0) {
        local_8 = 0xffffffff;
        if (local_18 == 0) {
          return local_58;
        }
        FUN_00453641();
        return iVar3;
      }
    }
    if (*(int *)(lVar2 + -0x3c) == in_stack_00000008) {
      VariantClear((VARIANTARG *)(lVar2 + -0x2c));
      puVar1 = *(undefined4 **)(lVar2 + -0x88);
      param_1 = 0;
      if (puVar1 == (undefined4 *)0x0) {
LAB_0046c720:
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      iVar3 = (**(code **)*puVar1)(puVar1,&DAT_004ab72c,&param_1);
      if (-1 < iVar3) {
        _memset(local_4c,0,0x20);
        _memset(local_2c,0,0x10);
        if (param_1 == 0) goto LAB_0046c720;
        in_stack_00000008 =
             (**(code **)(*(int *)param_1 + 0x18))
                       (param_1,in_stack_00000008,&DAT_004ab61c,0,2,local_2c,
                        (VARIANTARG *)(lVar2 + -0x2c),local_4c,local_14);
        if (local_48 != (BSTR)0x0) {
          SysFreeString(local_48);
        }
        if (local_44 != (BSTR)0x0) {
          SysFreeString(local_44);
        }
        if (local_40 != (BSTR)0x0) {
          SysFreeString(local_40);
        }
        (**(code **)(*(int *)param_1 + 8))(param_1);
        if (-1 < in_stack_00000008) {
          *(undefined4 *)(lVar2 + -0x30) = 1;
        }
      }
    }
  }
  local_8 = 0xffffffff;
  if (local_18 != 0) {
    FUN_00453641();
  }
  return 0;
}

