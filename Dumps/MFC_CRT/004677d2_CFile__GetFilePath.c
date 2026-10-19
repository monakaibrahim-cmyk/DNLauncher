// Address: 0x004677d2
// Name: CFile::GetFilePath
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CFile::GetFilePath(void)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CFile::GetFilePath(CFile *this)

{
  void *in_stack_00000004;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  short local_212 [45];
  undefined1 local_1b8 [432];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1b8;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  GetStatus(this,(CFileStatus *)&local_234);
  FUN_004035c0(in_stack_00000004,local_212);
  __security_check_cookie(local_8 ^ (uint)local_1b8);
  return;
}

