// Address: 0x004665a0
// Name: CDC::FillSolidRect
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDC::FillSolidRect(int,int,int,int,unsigned long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall
CDC::FillSolidRect(CDC *this,int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  RECT local_14;
  
  SetBkColor(*(HDC *)(this + 4),param_5);
  local_14.left = param_1;
  local_14.right = param_1 + param_3;
  local_14.top = param_2;
  local_14.bottom = param_2 + param_4;
  ExtTextOutW(*(HDC *)(this + 4),0,0,2,&local_14,(LPCWSTR)0x0,0,(INT *)0x0);
  return;
}

