// Address: 0x00451fd0
// Name: FUN_00451fd0
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00451fd0(int param_1,int param_2,undefined1 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00451fb0(param_1,param_2,param_3);
    FUN_00451890(extraout_ECX,extraout_EDX,param_1,param_2,_DAT_004a0058);
    FUN_00451910(param_1,param_2,0xb18f);
    FUN_004516a0(param_1,param_2,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    FUN_00451370(extraout_ECX_00,extraout_EDX_00,param_1,param_2,_DAT_004a0018,_DAT_004a0020,
                 _DAT_004a0028,_DAT_004a0030,_DAT_004a0038,_DAT_004a0040,_DAT_004a0048,_DAT_004a0050
                );
  }
  return;
}

