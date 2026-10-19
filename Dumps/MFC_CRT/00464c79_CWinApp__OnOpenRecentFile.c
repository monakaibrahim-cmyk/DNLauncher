// Address: 0x00464c79
// Name: CWinApp::OnOpenRecentFile
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CWinApp::OnOpenRecentFile(unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::OnOpenRecentFile(CWinApp *this,uint param_1)

{
  CRecentFileList *this_00;
  CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *pCVar1;
  int iVar2;
  
  this_00 = *(CRecentFileList **)(this + 0x88);
  if ((this_00 != (CRecentFileList *)0x0) && (0xe10f < param_1)) {
    if (*(int *)(this_00 + 4) + 0xe110U <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    pCVar1 = CRecentFileList::operator[](this_00,param_1 - 0xe110);
    iVar2 = (**(code **)(*(int *)this + 0x88))(*(undefined4 *)pCVar1);
    if (iVar2 == 0) {
      (**(code **)**(undefined4 **)(this + 0x88))(param_1 - 0xe110);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

