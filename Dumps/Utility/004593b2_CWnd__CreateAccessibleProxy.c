// Address: 0x004593b2
// Name: CWnd::CreateAccessibleProxy
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CWnd::CreateAccessibleProxy(unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  LRESULT LVar1;
  int iVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4593be;
  iVar2 = -0x7fffbffb;
  if (param_2 == -4) {
    iVar2 = (**(code **)(*(int *)this + 0x88))();
    if (-1 < iVar2) {
      if (*(LPUNKNOWN *)(this + 0x2c) == (LPUNKNOWN)0x0) {
        iVar2 = FUN_00459116(local_14);
        if (-1 < iVar2) {
          param_2 = 0;
          local_8 = 0;
          iVar2 = (**(code **)*local_14[0])(local_14[0],&DAT_004a09d4,&param_2);
          if (-1 < iVar2) {
            *(long *)(this + 0x2c) = param_2;
            (**(code **)(*(int *)param_2 + 0xc))(param_2,this + 0x30,this + 0x34);
            LVar1 = LresultFromObject((IID *)&riid_004a09c4,param_1,*(LPUNKNOWN *)(this + 0x2c));
            *param_3 = LVar1;
          }
          local_8 = 0xffffffff;
          iVar2 = 0;
          if (param_2 != 0) {
            (**(code **)(*(int *)param_2 + 8))(param_2);
          }
        }
      }
      else {
        LVar1 = LresultFromObject((IID *)&riid_004a09c4,param_1,*(LPUNKNOWN *)(this + 0x2c));
        *param_3 = LVar1;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

