// Address: 0x00467471
// Name: ATL::CTime::CTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(struct _SYSTEMTIME const &,int)
   
   Library: Visual Studio 2005 Release */

CTime * __thiscall ATL::CTime::CTime(CTime *this,_SYSTEMTIME *param_1,int param_2)

{
  CTime *local_c;
  CTime *local_8;
  
  if (param_1->wYear < 0x76c) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    local_c = this;
    local_8 = this;
    CTime((CTime *)&local_c,(uint)param_1->wYear,(uint)param_1->wMonth,(uint)param_1->wDay,
          (uint)param_1->wHour,(uint)param_1->wMinute,(uint)param_1->wSecond,param_2);
    *(CTime **)this = local_c;
    *(CTime **)(this + 4) = local_8;
  }
  return this;
}

