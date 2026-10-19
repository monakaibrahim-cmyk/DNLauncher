// Address: 0x004580b9
// Name: CWnd::GetAccessibleName
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: long __thiscall CWnd::GetAccessibleName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::GetAccessibleName(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  void **ppvVar5;
  LPSTR in_stack_ffffffd4;
  int in_stack_ffffffd8;
  __POSITION *local_1c;
  int local_18;
  HWND__ local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4580c5;
  if (param_1.n1._8_4_ == 0) {
    piVar3 = (int *)FUN_00453ed1();
    FUN_004031d0(local_14,piVar3);
    local_8 = 0;
    FID_conflict_GetWindowTextA(local_14,in_stack_ffffffd4,in_stack_ffffffd8);
    pwVar4 = (wchar_t *)FUN_00404770(local_14);
    *param_2 = pwVar4;
    local_18 = local_14[0].unused;
  }
  else {
    local_14[0].unused = GetWindowedChildCount(this);
    if (((int)param_1.n1._8_4_ <= local_14[0].unused) || (*(int *)(this + 0x4c) == 0)) {
      return -0x7ff8ffa9;
    }
    local_1c = *(__POSITION **)(*(int *)(this + 0x4c) + 0x44);
    do {
      if (local_1c == (__POSITION *)0x0) {
        return -0x7ff8ffa9;
      }
      ppvVar5 = CPtrList::GetNext((CPtrList *)(*(int *)(this + 0x4c) + 0x40),&local_1c);
      pvVar1 = *ppvVar5;
      iVar2 = *(int *)((int)pvVar1 + 4);
    } while (((iVar2 == 0) || (*(int *)(iVar2 + 0x74) == 0)) ||
            (local_14[0].unused = local_14[0].unused + 1, local_14[0].unused != param_1.n1._8_4_));
    piVar3 = (int *)FUN_00453ed1();
    FUN_004031d0(&local_18,piVar3);
    local_8 = 1;
    (**(code **)(**(int **)((int)pvVar1 + 4) + 0x8c))(&local_18);
    pwVar4 = (wchar_t *)FUN_00404770(&local_18);
    *param_2 = pwVar4;
  }
  FUN_004031b0((undefined4 *)(local_18 + -0x10));
  return 0;
}

