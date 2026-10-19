// Address: 0x0046ce64
// Name: ATL::COleDateTime::COleDateTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::COleDateTime::COleDateTime(int,int,int,int,int,int)
   
   Library: Visual Studio 2005 Release */

COleDateTime * __thiscall
ATL::COleDateTime::COleDateTime
          (COleDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  SetDateTime(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return this;
}

