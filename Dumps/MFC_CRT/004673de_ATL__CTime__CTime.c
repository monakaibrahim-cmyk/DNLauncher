// Address: 0x004673de
// Name: ATL::CTime::CTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(int,int,int,int,int,int,int)
   
   Library: Visual Studio 2005 Release */

CTime * __thiscall
ATL::CTime::CTime(CTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  __time64_t _Var1;
  undefined4 *puVar2;
  tm local_28;
  
  if (0x76b < param_1) {
    if ((((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1f)) && ((uint)param_4 < 0x18)) &&
       (((uint)param_5 < 0x3c && ((uint)param_6 < 0x3c)))) {
      local_28.tm_sec = param_6;
      local_28.tm_year = param_1 + -0x76c;
      local_28.tm_isdst = param_7;
      local_28.tm_mon = param_2 + -1;
      local_28.tm_min = param_5;
      local_28.tm_hour = param_4;
      local_28.tm_mday = param_3;
      _Var1 = __mktime64(&local_28);
      *(__time64_t *)this = _Var1;
      if (_Var1 != -1) {
        return this;
      }
      puVar2 = (undefined4 *)0x80070057;
      goto LAB_004673f5;
    }
  }
  puVar2 = (undefined4 *)0x80004005;
LAB_004673f5:
                    /* WARNING: Subroutine does not return */
  FUN_00403200(puVar2);
}

