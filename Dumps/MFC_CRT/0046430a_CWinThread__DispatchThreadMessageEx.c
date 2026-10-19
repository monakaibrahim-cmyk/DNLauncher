// Address: 0x0046430a
// Name: CWinThread::DispatchThreadMessageEx
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CWinThread::DispatchThreadMessageEx(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinThread::DispatchThreadMessageEx(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  int *piVar2;
  AFX_MSGMAP_ENTRY *pAVar3;
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x28))();
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1->message < 0xc000) {
      pAVar3 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar2[1],param_1->message,0,0);
      if (pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
LAB_0046433f:
        (**(code **)(pAVar3 + 0x14))(param_1->wParam,param_1->lParam);
        return 1;
      }
    }
    else {
      pAVar3 = (AFX_MSGMAP_ENTRY *)piVar2[1];
      while (pAVar3 = AfxFindMessageEntry(pAVar3,0xc000,0,0), pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(UINT **)(pAVar3 + 0x10) == param_1->message) goto LAB_0046433f;
        pAVar3 = pAVar3 + 0x18;
      }
    }
    piVar2 = (int *)(*(code *)*piVar2)();
    iVar1 = *piVar2;
  } while( true );
}

