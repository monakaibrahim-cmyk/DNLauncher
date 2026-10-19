// Address: 0x00459188
// Name: CWaitCursor::~CWaitCursor
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CWaitCursor::~CWaitCursor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWaitCursor::~CWaitCursor(CWaitCursor *this)

{
  AFX_MODULE_STATE *pAVar1;
  void *local_414;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0xc;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

