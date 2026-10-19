// Address: 0x004539ce
// Name: CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
// Category: Utility


/* Library Function - Single Match
    public: class AFX_MODULE_THREAD_STATE * __thiscall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::GetData(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_THREAD_STATE * __thiscall
CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData(CThreadLocal<AFX_MODULE_THREAD_STATE> *this)

{
  CNoTrackObject *pCVar1;
  
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)this,(_func_CNoTrackObject_ptr *)&LAB_004538fd);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  return (AFX_MODULE_THREAD_STATE *)pCVar1;
}

