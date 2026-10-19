// Address: 0x00454f78
// Name: CFrameWnd::IsTracking
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CFrameWnd::IsTracking(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CFrameWnd::IsTracking(CFrameWnd *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa8);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}

