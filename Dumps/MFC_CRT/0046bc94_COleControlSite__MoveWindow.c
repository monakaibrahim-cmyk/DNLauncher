// Address: 0x0046bc94
// Name: COleControlSite::MoveWindow
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::MoveWindow(int,int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlSite::MoveWindow(COleControlSite *this,int param_1,int param_2,int param_3,int param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LPRECT lprc;
  
  if ((*(int *)(this + 0x54) != 0) && (*(int *)(this + 0x50) != 0)) {
    lprc = (LPRECT)(this + 0x30);
    LVar1 = lprc->left;
    uVar2 = *(undefined4 *)(this + 0x34);
    uVar3 = *(undefined4 *)(this + 0x38);
    uVar4 = *(undefined4 *)(this + 0x3c);
    SetRect(lprc,param_1,param_2,param_3 + param_1,param_4 + param_2);
    iVar5 = SetExtent(this);
    if (iVar5 == 0) {
      lprc->left = LVar1;
      *(undefined4 *)(this + 0x34) = uVar2;
      *(undefined4 *)(this + 0x38) = uVar3;
      *(undefined4 *)(this + 0x3c) = uVar4;
    }
    else {
      SetRect(lprc,param_1,param_2,(*(int *)(this + 0x38) - lprc->left) + param_1,
              (*(int *)(this + 0x3c) - *(int *)(this + 0x34)) + param_2);
      (**(code **)(**(int **)(this + 0x54) + 0x1c))(*(int **)(this + 0x54),lprc,lprc);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

