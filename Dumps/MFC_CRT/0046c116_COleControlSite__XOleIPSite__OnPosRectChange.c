// Address: 0x0046c116
// Name: COleControlSite::XOleIPSite::OnPosRectChange
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::OnPosRectChange(struct tagRECT const
   *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::OnPosRectChange(tagRECT *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  RECT *in_stack_00000008;
  tagRECT local_24;
  tagRECT local_14;
  
  if (((param_1[-0xb].top != 0) && (iVar1 = *(int *)(param_1[-0xb].top + 0x20), iVar1 != 0)) &&
     (param_1[-8].right != 0)) {
    GetClientRect(*(HWND *)(iVar1 + 0x20),&local_24);
    CopyRect(&local_14,in_stack_00000008);
    piVar2 = (int *)param_1[-8].right;
    param_1[-10].top = local_14.left;
    param_1[-10].right = local_14.top;
    param_1[-10].bottom = local_14.right;
    param_1[-9].left = local_14.bottom;
    lVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,&param_1[-10].top,&local_24);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

