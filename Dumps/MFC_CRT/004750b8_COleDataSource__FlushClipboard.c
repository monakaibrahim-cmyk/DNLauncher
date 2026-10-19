// Address: 0x004750b8
// Name: COleDataSource::FlushClipboard
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __stdcall COleDataSource::FlushClipboard(void)
   
   Library: Visual Studio 2005 Release */

void COleDataSource::FlushClipboard(void)

{
  COleDataSource *pCVar1;
  
  pCVar1 = GetClipboardOwner();
  if (pCVar1 != (COleDataSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004750c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    OleFlushClipboard();
    return;
  }
  return;
}

