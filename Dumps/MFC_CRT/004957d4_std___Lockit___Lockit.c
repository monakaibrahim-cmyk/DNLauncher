// Address: 0x004957d4
// Name: std::_Lockit::_Lockit
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2005 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_004958a5((LPCRITICAL_SECTION)(&DAT_004cba78 + (param_1 & 3U) * 0x18));
  return this;
}

