// Address: 0x004690eb
// Name: AfxCriticalInit
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall AfxCriticalInit(void)
   
   Library: Visual Studio 2005 Release */

int AfxCriticalInit(void)

{
  if (DAT_004cabbc == 0) {
    DAT_004cabbc = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cad58);
  }
  return DAT_004cabbc;
}

