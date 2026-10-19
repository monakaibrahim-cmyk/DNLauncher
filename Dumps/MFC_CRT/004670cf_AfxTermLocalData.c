// Address: 0x004670cf
// Name: AfxTermLocalData
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxTermLocalData(struct HINSTANCE__ *,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void AfxTermLocalData(HINSTANCE__ *param_1,int param_2)

{
  if (DAT_004cab80 != (CThreadSlotData *)0x0) {
    CThreadSlotData::DeleteValues(DAT_004cab80,param_1,param_2);
    return;
  }
  return;
}

