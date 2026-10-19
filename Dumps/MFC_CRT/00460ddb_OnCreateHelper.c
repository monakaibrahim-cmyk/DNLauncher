// Address: 0x00460ddb
// Name: OnCreateHelper
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTA *,struct
   CCreateContext *)
    protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTW *,struct
   CCreateContext *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall OnCreateHelper(void *this,undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = CWnd::Default(this);
  if ((lVar1 != -1) && (iVar2 = (**(code **)(*(int *)this + 0x15c))(param_1,param_2), iVar2 != 0)) {
    PostMessageW(*(HWND *)((int)this + 0x20),0x362,0xe001,0);
    (**(code **)(*(int *)this + 0x148))(1);
    return 0;
  }
  return 0xffffffff;
}

