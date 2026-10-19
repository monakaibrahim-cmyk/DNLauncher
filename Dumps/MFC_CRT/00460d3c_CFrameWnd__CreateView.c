// Address: 0x00460d3c
// Name: CFrameWnd::CreateView
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CWnd * __thiscall CFrameWnd::CreateView(struct CCreateContext *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CFrameWnd::CreateView(CFrameWnd *this,CCreateContext *param_1,uint param_2)

{
  CObject *this_00;
  int iVar1;
  ulong uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  CFrameWnd *local_8;
  
  local_8 = this;
  if ((param_1 != (CCreateContext *)0x0) && (*(CRuntimeClass **)param_1 != (CRuntimeClass *)0x0)) {
    this_00 = CRuntimeClass::CreateObject(*(CRuntimeClass **)param_1);
    if (this_00 != (CObject *)0x0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      iVar1 = (**(code **)(*(int *)this_00 + 0x54))
                        (0,0,0x50800000,&local_18,local_8,param_2,param_1);
      if (iVar1 != 0) {
        uVar2 = CWnd::GetExStyle((CWnd *)this_00);
        if ((uVar2 & 0x200) == 0) {
          return (CWnd *)this_00;
        }
        CWnd::ModifyStyleEx((CWnd *)local_8,0x200,0,0x20);
        return (CWnd *)this_00;
      }
    }
    return (CWnd *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

