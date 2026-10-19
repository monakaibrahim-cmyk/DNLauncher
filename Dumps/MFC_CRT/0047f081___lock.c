// Address: 0x0047f081
// Name: __lock
// Category: MFC_CRT


/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&lpCriticalSection_004c3dc0)[_File * 2] == (LPCRITICAL_SECTION)0x0) {
    iVar1 = FUN_0047efbe(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((&lpCriticalSection_004c3dc0)[_File * 2]);
  return;
}

