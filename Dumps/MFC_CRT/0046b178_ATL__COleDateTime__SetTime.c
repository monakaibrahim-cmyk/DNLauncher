// Address: 0x0046b178
// Name: ATL::COleDateTime::SetTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall ATL::COleDateTime::SetTime(int,int,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall ATL::COleDateTime::SetTime(COleDateTime *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = SetDateTime(this,0x76b,0xc,0x1e,param_1,param_2,param_3);
  return iVar1;
}

