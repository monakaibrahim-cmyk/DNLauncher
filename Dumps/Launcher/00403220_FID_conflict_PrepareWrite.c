// Address: 0x00403220
// Name: FID_conflict:PrepareWrite
// Category: Launcher


/* Library Function - Multiple Matches With Different Base Names
    public: char * __thiscall ATL::CSimpleStringT<char,0>::GetBuffer(int)
    private: char * __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite(int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __thiscall FID_conflict_PrepareWrite(void *this,int param_1)

{
  if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - param_1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,param_1);
  }
  return *(undefined4 *)this;
}

