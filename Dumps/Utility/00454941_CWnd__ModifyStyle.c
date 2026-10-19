// Address: 0x00454941
// Name: CWnd::ModifyStyle
// Category: Utility


/* Library Function - Single Match
    public: static int __stdcall CWnd::ModifyStyle(struct HWND__ *,unsigned long,unsigned
   long,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int CWnd::ModifyStyle(HWND__ *param_1,ulong param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _AfxModifyStyle(param_1,-0x10,param_2,param_3,param_4);
  return iVar1;
}

