// Address: 0x00490189
// Name: FUN_00490189
// Category: MFC_CRT


void __cdecl FUN_00490189(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_004cc260)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x40));
  return;
}

