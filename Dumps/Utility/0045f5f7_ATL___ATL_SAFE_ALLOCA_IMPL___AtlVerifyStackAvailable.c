// Address: 0x0045f5f7
// Name: ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable
// Category: Utility


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    bool __cdecl ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(unsigned long)
   
   Library: Visual Studio 2005 Release */

bool __cdecl ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(ulong param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 local_38 [4];
  ulong local_28;
  undefined1 local_21;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x45f603;
  local_21 = 1;
  local_8 = 0;
  local_28 = 0;
  lVar2 = AtlAdd<unsigned_long>(&local_28,param_1,0x2000);
  if (lVar2 < 0) {
    local_21 = 0;
  }
  else {
    local_1c = local_38 + -local_28;
  }
  local_8 = 0xfffffffe;
  uVar1 = FUN_0047d350();
  return (bool)uVar1;
}

