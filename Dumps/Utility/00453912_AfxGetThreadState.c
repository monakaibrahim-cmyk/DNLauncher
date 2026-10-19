// Address: 0x00453912
// Name: AfxGetThreadState
// Category: Utility


/* Library Function - Single Match
    class _AFX_THREAD_STATE * __stdcall AfxGetThreadState(void)
   
   Library: Visual Studio 2005 Release */

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  CNoTrackObject *pCVar1;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  return (_AFX_THREAD_STATE *)pCVar1;
}

