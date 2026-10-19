// Address: 0x0047ee07
// Name: ___report_gsfailure
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_004cb4e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004cb4e4 = &stack0x00000004;
  _DAT_004cb420 = 0x10001;
  _DAT_004cb3c8 = 0xc0000409;
  _DAT_004cb3cc = 1;
  local_32c = DAT_004c3750;
  local_328 = DAT_004c3754;
  _DAT_004cb3d4 = unaff_retaddr;
  _DAT_004cb4ac = in_GS;
  _DAT_004cb4b0 = in_FS;
  _DAT_004cb4b4 = in_ES;
  _DAT_004cb4b8 = in_DS;
  _DAT_004cb4bc = unaff_EDI;
  _DAT_004cb4c0 = unaff_ESI;
  _DAT_004cb4c4 = unaff_EBX;
  _DAT_004cb4c8 = in_EDX;
  _DAT_004cb4cc = in_ECX;
  _DAT_004cb4d0 = in_EAX;
  _DAT_004cb4d4 = unaff_EBP;
  DAT_004cb4d8 = unaff_retaddr;
  _DAT_004cb4dc = in_CS;
  _DAT_004cb4e8 = in_SS;
  DAT_004cb418 = IsDebuggerPresent();
  FUN_0047edff();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&ExceptionInfo_004a5944);
  if (DAT_004cb418 == 0) {
    FUN_0047edff();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}

