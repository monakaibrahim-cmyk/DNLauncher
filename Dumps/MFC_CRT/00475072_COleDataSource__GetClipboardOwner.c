// Address: 0x00475072
// Name: COleDataSource::GetClipboardOwner
// Category: MFC_CRT


/* Library Function - Single Match
    public: static class COleDataSource * __stdcall COleDataSource::GetClipboardOwner(void)
   
   Library: Visual Studio 2005 Release */

COleDataSource * COleDataSource::GetClipboardOwner(void)

{
  CNoTrackObject *pCVar1;
  LPDATAOBJECT pDataObj;
  HRESULT HVar2;
  
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_004cae18,(_func_CNoTrackObject_ptr *)&LAB_00475046
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(CCmdTarget **)(pCVar1 + 8) != (CCmdTarget *)0x0) {
    pDataObj = (LPDATAOBJECT)CCmdTarget::GetInterface(*(CCmdTarget **)(pCVar1 + 8),&DAT_004ab6ac);
    HVar2 = OleIsCurrentClipboard(pDataObj);
    if (HVar2 == 0) {
      return *(COleDataSource **)(pCVar1 + 8);
    }
    *(undefined4 *)(pCVar1 + 8) = 0;
  }
  return (COleDataSource *)0x0;
}

