// Address: 0x0045a8cd
// Name: CWinApp::DoMessageBox
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::DoMessageBox(wchar_t const *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::DoMessageBox(CWinApp *this,wchar_t *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = ShowAppMessageBox(this,param_1,param_2,param_3);
  return iVar1;
}

