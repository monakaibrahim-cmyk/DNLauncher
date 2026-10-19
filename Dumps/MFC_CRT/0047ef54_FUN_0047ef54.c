// Address: 0x0047ef54
// Name: FUN_0047ef54
// Category: MFC_CRT


void FUN_0047ef54(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION *pp_Var1;
  
  pp_Var1 = &lpCriticalSection_004c3dc0;
  while ((lpCriticalSection = *pp_Var1, lpCriticalSection == (LPCRITICAL_SECTION)0x0 ||
         (pp_Var1[1] == (LPCRITICAL_SECTION)0x1))) {
    pp_Var1 = pp_Var1 + 2;
    if (0x4c3edf < (int)pp_Var1) {
      pp_Var1 = &lpCriticalSection_004c3dc0;
      do {
        if ((*pp_Var1 != (LPCRITICAL_SECTION)0x0) && (pp_Var1[1] == (LPCRITICAL_SECTION)0x1)) {
          DeleteCriticalSection(*pp_Var1);
        }
        pp_Var1 = pp_Var1 + 2;
      } while ((int)pp_Var1 < 0x4c3ee0);
      return;
    }
  }
  DeleteCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
  _free(lpCriticalSection);
}

