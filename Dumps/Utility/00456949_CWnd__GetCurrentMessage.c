// Address: 0x00456949
// Name: CWnd::GetCurrentMessage
// Category: Utility


/* Library Function - Single Match
    protected: static struct tagMSG const * __stdcall CWnd::GetCurrentMessage(void)
   
   Library: Visual Studio 2005 Release */

tagMSG * CWnd::GetCurrentMessage(void)

{
  CNoTrackObject *pCVar1;
  LONG LVar2;
  DWORD DVar3;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  LVar2 = GetMessageTime();
  *(LONG *)(pCVar1 + 0x68) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(pCVar1 + 0x70) = (int)(short)(DVar3 >> 0x10);
  *(int *)(pCVar1 + 0x6c) = (int)(short)DVar3;
  return (tagMSG *)(pCVar1 + 0x58);
}

