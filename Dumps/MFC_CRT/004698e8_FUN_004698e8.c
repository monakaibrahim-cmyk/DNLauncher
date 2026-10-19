// Address: 0x004698e8
// Name: FUN_004698e8
// Category: MFC_CRT


CDialogTemplate * __thiscall FUN_004698e8(void *this,DLGTEMPLATE *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (DLGTEMPLATE *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    uVar1 = CDialogTemplate::GetTemplateSize(param_1);
    iVar2 = CDialogTemplate::SetTemplate(this,param_1,uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
  }
  return this;
}

