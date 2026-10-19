// Address: 0x004696c8
// Name: CDialogTemplate::SetTemplate
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CDialogTemplate::SetTemplate(struct DLGTEMPLATE const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialogTemplate::SetTemplate(CDialogTemplate *this,DLGTEMPLATE *param_1,uint param_2)

{
  HGLOBAL hMem;
  DLGTEMPLATE *pDVar1;
  int iVar2;
  
  *(uint *)(this + 4) = param_2;
  if (param_2 <= param_2 + 0x40) {
    hMem = GlobalAlloc(0x40,param_2 + 0x40);
    *(HGLOBAL *)this = hMem;
    if (hMem != (HGLOBAL)0x0) {
      pDVar1 = GlobalLock(hMem);
      FUN_004527b0(pDVar1,*(rsize_t *)(this + 4),param_1,*(rsize_t *)(this + 4));
      iVar2 = HasFont(pDVar1);
      *(uint *)(this + 8) = (uint)(iVar2 == 0);
      GlobalUnlock(*(HGLOBAL *)this);
      return 1;
    }
  }
  return 0;
}

