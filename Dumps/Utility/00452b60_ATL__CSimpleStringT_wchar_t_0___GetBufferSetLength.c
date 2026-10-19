// Address: 0x00452b60
// Name: ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
// Category: Utility


/* Library Function - Single Match
    public: wchar_t * __thiscall ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength(int)
   
   Library: Visual Studio 2005 Release */

wchar_t * __thiscall
ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength(CSimpleStringT<wchar_t,0> *this,int param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)FID_conflict_PrepareWrite(this,param_1);
  FUN_00402e40(this,param_1);
  return pwVar1;
}

