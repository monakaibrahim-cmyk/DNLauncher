// Address: 0x00464613
// Name: CWinThread::ProcessMessageFilter
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::ProcessMessageFilter(int,struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinThread::ProcessMessageFilter(CWinThread *this,int param_1,tagMSG *param_2)

{
  CWinThread *pCVar1;
  CWnd *this_00;
  CFrameWnd *this_01;
  int iVar2;
  int iVar3;
  CNoTrackObject *pCVar4;
  undefined4 *puVar5;
  undefined4 local_24 [7];
  CWinThread *local_8;
  
  if (param_2 == (tagMSG *)0x0) {
    return 0;
  }
  local_8 = this;
  if (param_1 != 0) {
    if (param_1 != 2) {
      return 0;
    }
    this_00 = CWnd::FromHandle(param_2->hwnd);
    if (((((this_00 != (CWnd *)0x0) &&
          (this_01 = CWnd::GetTopLevelFrame(this_00), this_01 != (CFrameWnd *)0x0)) &&
         (iVar2 = CFrameWnd::IsTracking(this_01), iVar2 != 0)) &&
        ((*(int *)(this_01 + 0x68) != 0 && (iVar2 = FUN_0041c6c0(), *(int *)(local_8 + 0x20) != 0)))
        ) && ((iVar3 = IsEnterKey(param_2), iVar3 != 0 || (param_2->message == 0x202)))) {
      SendMessageW(*(HWND *)(iVar2 + 0x20),0x111,0xe146,0);
      return 1;
    }
  }
  FUN_0041c6c0();
  if (((param_1 == 0) && (*(int *)(local_8 + 0x24) != 0)) &&
     ((0xff < param_2->message && (param_2->message < 0x10a)))) {
    pCVar4 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
    if (pCVar4 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    if (*(int *)(pCVar4 + 0x140) == 0) {
      *(undefined4 *)(pCVar4 + 0x140) = 1;
      puVar5 = local_24;
      for (iVar2 = 7; pCVar1 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = param_2->hwnd;
        param_2 = (tagMSG *)&param_2->message;
        puVar5 = puVar5 + 1;
      }
      iVar2 = CWnd::IsWindowEnabled(*(CWnd **)(local_8 + 0x24));
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)pCVar1 + 0x58))(local_24), iVar2 != 0)) {
        *(undefined4 *)(pCVar4 + 0x140) = 0;
        return 1;
      }
      *(undefined4 *)(pCVar4 + 0x140) = 0;
    }
  }
  return 0;
}

