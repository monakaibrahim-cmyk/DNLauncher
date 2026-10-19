// Address: 0x0046910f
// Name: AfxCriticalTerm
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxCriticalTerm(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void AfxCriticalTerm(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if (DAT_004cabbc != 0) {
    DAT_004cabbc = DAT_004cabbc + -1;
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cad58);
    piVar1 = &DAT_004cad70;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_004cabc0;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x4cad58);
  }
  return;
}

