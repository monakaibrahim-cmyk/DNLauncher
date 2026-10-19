// Address: 0x00417ff0
// Name: FUN_00417ff0
// Category: Launcher


/* WARNING: Type propagation algorithm not settling */

void FUN_00417ff0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int local_218 [3];
  short local_20c;
  undefined1 local_20a [518];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_218;
  if (unaff_ESI == 0) {
    __security_check_cookie(local_4 ^ (uint)local_218);
    return;
  }
  local_20c = 0;
  _memset(local_20a,0,0x206);
  local_218[2] = 0x104;
  local_218[1] = 0;
  iVar2 = HttpQueryInfoW(unaff_ESI,0x13,&local_20c,local_218 + 2,local_218 + 1);
  if (iVar2 != 0) {
    FUN_004035c0(local_218,&local_20c);
    ATL::operator==((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)local_218,
                    L"200");
    piVar1 = (int *)(local_218[0] + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_218[0] + -0x10) + 4))((undefined4 *)(local_218[0] + -0x10));
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_218);
  return;
}

