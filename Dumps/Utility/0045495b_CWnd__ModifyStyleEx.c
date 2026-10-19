// Address: 0x0045495b
// Name: CWnd::ModifyStyleEx
// Category: Utility


/* Library Function - Single Match
    public: static int __stdcall CWnd::ModifyStyleEx(struct HWND__ *,unsigned long,unsigned
   long,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int CWnd::ModifyStyleEx(HWND__ *param_1,ulong param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _AfxModifyStyle(param_1,-0x14,param_2,param_3,param_4);
  return iVar1;
}

