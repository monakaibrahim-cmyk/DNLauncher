// Address: 0x004764b0
// Name: __vswprintf_helper
// Category: MFC_CRT


/* Library Function - Single Match
    __vswprintf_helper
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vswprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if ((param_3 != 0) && (param_2 == (char *)0x0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  local_24._flag = 0x42;
  local_24._base = param_2;
  local_24._ptr = param_2;
  if (param_3 < 0x40000000) {
    local_24._cnt = param_3 * 2;
  }
  else {
    local_24._cnt = 0x7fffffff;
  }
  iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
  if (param_2 == (char *)0x0) {
    return iVar2;
  }
  if (-1 < iVar2) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      uVar3 = FUN_004800dc(0,&local_24);
      if (uVar3 == 0xffffffff) goto LAB_00476592;
    }
    else {
      *local_24._ptr = '\0';
      local_24._ptr = local_24._ptr + 1;
    }
    local_24._cnt = local_24._cnt + -1;
    if (-1 < local_24._cnt) {
      *local_24._ptr = '\0';
      return iVar2;
    }
    uVar3 = FUN_004800dc(0,&local_24);
    if (uVar3 != 0xffffffff) {
      return iVar2;
    }
  }
LAB_00476592:
  (param_2 + param_3 * 2 + -2)[0] = '\0';
  (param_2 + param_3 * 2 + -2)[1] = '\0';
  return (-1 < local_24._cnt) - 2;
}

