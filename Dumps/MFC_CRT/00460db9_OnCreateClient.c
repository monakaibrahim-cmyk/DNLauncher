// Address: 0x00460db9
// Name: OnCreateClient
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CFrameWnd::OnCreateClient(struct tagCREATESTRUCTA *,struct
   CCreateContext *)
    protected: virtual int __thiscall CFrameWnd::OnCreateClient(struct tagCREATESTRUCTW *,struct
   CCreateContext *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall OnCreateClient(void *this,undefined4 param_1,CCreateContext *param_2)

{
  CWnd *pCVar1;
  
  if (((param_2 != (CCreateContext *)0x0) && (*(int *)param_2 != 0)) &&
     (pCVar1 = CFrameWnd::CreateView(this,param_2,0xe900), pCVar1 == (CWnd *)0x0)) {
    return 0;
  }
  return 1;
}

