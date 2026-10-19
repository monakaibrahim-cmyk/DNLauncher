// Address: 0x00481b29
// Name: FUN_00481b29
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00481b29(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  LONG LVar3;
  DWORD *pDVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  pthreadmbcinfo ptVar7;
  int iStack00000004;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  FUN_00481832();
  ptVar2 = p_Var1->ptmbcinfo;
  iStack00000004 = getSystemCP(in_stack_ffffffc8);
  if (iStack00000004 == ptVar2->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar2 = __malloc_crt(0x220);
    if (ptVar2 != (pthreadmbcinfo)0x0) {
      ptVar6 = p_Var1->ptmbcinfo;
      ptVar7 = ptVar2;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        ptVar7->refcount = ptVar6->refcount;
        ptVar6 = (pthreadmbcinfo)&ptVar6->mbcodepage;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
      }
      ptVar2->refcount = 0;
      local_24 = FUN_00481950(iStack00000004,(int)ptVar2);
      if (local_24 == 0) {
        LVar3 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar3 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_004c3ef0)) {
                    /* WARNING: Subroutine does not return */
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar2;
        InterlockedIncrement(&ptVar2->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_004c4414 & 1) == 0)) {
          __lock(0xd);
          _DAT_004cb86c = ptVar2->mbcodepage;
          _DAT_004cb870 = ptVar2->ismbcodepage;
          _DAT_004cb874 = *(undefined4 *)ptVar2->mbulinfo;
          for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
            (&DAT_004cb860)[iVar5] = ptVar2->mbulinfo[iVar5 + 2];
          }
          for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
            (&DAT_004c4110)[iVar5] = ptVar2->mbctype[iVar5 + 4];
          }
          for (iVar5 = 0; iVar5 < 0x100; iVar5 = iVar5 + 1) {
            (&DAT_004c4218)[iVar5] = ptVar2->mbcasemap[iVar5 + 4];
          }
          LVar3 = InterlockedDecrement((LONG *)lpAddend_004c4318);
          if ((LVar3 == 0) && (lpAddend_004c4318 != &DAT_004c3ef0)) {
                    /* WARNING: Subroutine does not return */
            _free(lpAddend_004c4318);
          }
          lpAddend_004c4318 = (undefined *)ptVar2;
          InterlockedIncrement(&ptVar2->refcount);
          FUN_00481c8a();
        }
      }
      else if (local_24 == -1) {
        if (ptVar2 != (pthreadmbcinfo)&DAT_004c3ef0) {
                    /* WARNING: Subroutine does not return */
          _free(ptVar2);
        }
        pDVar4 = FUN_0047b849();
        *pDVar4 = 0x16;
      }
    }
  }
  return local_24;
}

