// Address: 0x004665ec
// Name: CDC::Draw3dRect
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDC::Draw3dRect(int,int,int,int,unsigned long,unsigned long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall
CDC::Draw3dRect(CDC *this,int param_1,int param_2,int param_3,int param_4,ulong param_5,
               ulong param_6)

{
  FillSolidRect(this,param_1,param_2,param_3 + -1,1,param_5);
  FillSolidRect(this,param_1,param_2,1,param_4 + -1,param_5);
  FillSolidRect(this,param_1 + param_3,param_2,-1,param_4,param_6);
  FillSolidRect(this,param_1,param_2 + param_4,param_3,-1,param_6);
  return;
}

