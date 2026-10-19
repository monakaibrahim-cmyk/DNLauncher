// Address: 0x004674c9
// Name: ATL::CTime::CTime
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CTime::CTime(struct _FILETIME const &,int)
   
   Library: Visual Studio 2005 Release */

CTime * __thiscall ATL::CTime::CTime(CTime *this,_FILETIME *param_1,int param_2)

{
  BOOL BVar1;
  _SYSTEMTIME local_24;
  _FILETIME local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  BVar1 = FileTimeToLocalFileTime(param_1,&local_14);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_14,&local_24);
    if (BVar1 != 0) {
      CTime((CTime *)&local_c,&local_24,param_2);
      *(undefined4 *)this = local_c;
      *(undefined4 *)(this + 4) = local_8;
      return this;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

