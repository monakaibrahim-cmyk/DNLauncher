// Address: 0x004799b5
// Name: _JumpToContinuation
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004799de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

