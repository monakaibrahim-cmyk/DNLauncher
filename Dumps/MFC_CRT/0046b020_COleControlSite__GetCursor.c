// Address: 0x0046b020
// Name: COleControlSite::GetCursor
// Category: MFC_CRT


/* Library Function - Single Match
    protected: long __thiscall COleControlSite::GetCursor(long,struct IUnknown * *,void * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
COleControlSite::GetCursor(COleControlSite *this,long param_1,IUnknown **param_2,void **param_3)

{
  IUnknown *pIVar1;
  CDataBoundProperty *this_00;
  
  if (param_3 != (void **)0x0) {
    *param_3 = (void *)0x0;
  }
  this_00 = *(CDataBoundProperty **)(this + 0x94);
  while( true ) {
    if (this_00 == (CDataBoundProperty *)0x0) {
      return 0;
    }
    if (*(int *)(this_00 + 8) == param_1) break;
    this_00 = *(CDataBoundProperty **)(this_00 + 0x18);
  }
  pIVar1 = CDataBoundProperty::GetCursor(this_00);
  *param_2 = pIVar1;
  return 0;
}

