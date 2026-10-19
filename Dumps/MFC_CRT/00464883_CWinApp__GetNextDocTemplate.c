// Address: 0x00464883
// Name: CWinApp::GetNextDocTemplate
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CDocTemplate * __thiscall CWinApp::GetNextDocTemplate(struct __POSITION * &)const 
   
   Library: Visual Studio 2005 Release */

CDocTemplate * __thiscall CWinApp::GetNextDocTemplate(CWinApp *this,__POSITION **param_1)

{
  CDocTemplate *pCVar1;
  
  if (*(int *)(this + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00464893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = (CDocTemplate *)(**(code **)(**(int **)(this + 0x58) + 0x14))();
  return pCVar1;
}

