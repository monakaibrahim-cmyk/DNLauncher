// Address: 0x004673af
// Name: ATL::CTime::IsValidFILETIME
// Category: MFC_CRT


/* Library Function - Single Match
    public: static int __stdcall ATL::CTime::IsValidFILETIME(struct _FILETIME const &)
   
   Library: Visual Studio 2005 Release */

int ATL::CTime::IsValidFILETIME(_FILETIME *param_1)

{
  BOOL BVar1;
  uint uVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
  uVar2 = 0;
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_c,&local_1c);
    uVar2 = (uint)(BVar1 != 0);
  }
  return uVar2;
}

