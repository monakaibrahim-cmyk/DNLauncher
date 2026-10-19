// Address: 0x0046373d
// Name: CWinApp::ProcessWndProcException
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __thiscall CWinApp::ProcessWndProcException(class CException *,struct
   tagMSG const *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWinApp::ProcessWndProcException(CWinApp *this,CException *param_1,tagMSG *param_2)

{
  UINT UVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar3 = 0;
  if ((param_1 != (CException *)0x0) && (param_2 != (tagMSG *)0x0)) {
    UVar1 = param_2->message;
    if ((UVar1 == 1) || (UVar1 == 0xf)) {
      lVar3 = AfxInternalProcessWndProcException(param_1,param_2);
    }
    else {
      uVar4 = 0xf108;
      if (UVar1 == 0x111) {
        if (param_2->lParam == 0) {
          uVar4 = 0xf109;
        }
        lVar3 = 1;
      }
      iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMemoryException_004a0208
                               );
      if (iVar2 == 0) {
        iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CUserException_004a11c0
                                 );
        if (iVar2 != 0) {
          return lVar3;
        }
        uVar5 = 0x10;
      }
      else {
        uVar5 = 0x1030;
      }
      (**(code **)(*(int *)param_1 + 0x14))(uVar5,uVar4);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

