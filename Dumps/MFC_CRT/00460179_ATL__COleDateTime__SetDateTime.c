// Address: 0x00460179
// Name: ATL::COleDateTime::SetDateTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall ATL::COleDateTime::SetDateTime(int,int,int,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
ATL::COleDateTime::SetDateTime
          (COleDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  _memset(&local_14,0,0x10);
  local_14.wYear = (WORD)param_1;
  local_14.wMonth = (WORD)param_2;
  local_14.wDay = (WORD)param_3;
  local_14.wHour = (WORD)param_4;
  local_14.wMinute = (WORD)param_5;
  local_14.wSecond = (WORD)param_6;
  iVar1 = AtlConvertSystemTimeToVariantTime(&local_14,(double *)this);
  *(uint *)(this + 8) = (uint)(iVar1 == 0);
  return (uint)(iVar1 == 0);
}

