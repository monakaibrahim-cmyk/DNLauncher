// Address: 0x00464872
// Name: CWinApp::GetFirstDocTemplatePosition
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CWinApp::GetFirstDocTemplatePosition(void)const 
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall CWinApp::GetFirstDocTemplatePosition(CWinApp *this)

{
  __POSITION *p_Var1;
  
  if (*(int *)(this + 0x58) == 0) {
    return (__POSITION *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00464880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (__POSITION *)(**(code **)(**(int **)(this + 0x58) + 0x10))();
  return p_Var1;
}

