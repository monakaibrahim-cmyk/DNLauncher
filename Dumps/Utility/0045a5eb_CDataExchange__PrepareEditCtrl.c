// Address: 0x0045a5eb
// Name: CDataExchange::PrepareEditCtrl
// Category: Utility


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CDataExchange::PrepareEditCtrl(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HWND__ * __thiscall CDataExchange::PrepareEditCtrl(CDataExchange *this,int param_1)

{
  HWND__ *pHVar1;
  
  pHVar1 = PrepareCtrl(this,param_1);
  *(undefined4 *)(this + 0xc) = 1;
  return pHVar1;
}

