// Address: 0x0045ff36
// Name: ATL::AtlConvertSystemTimeToVariantTime
// Category: Utility


/* Library Function - Single Match
    int __cdecl ATL::AtlConvertSystemTimeToVariantTime(struct _SYSTEMTIME const &,double *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl ATL::AtlConvertSystemTimeToVariantTime(_SYSTEMTIME *param_1,double *param_2)

{
  INT IVar1;
  _SYSTEMTIME local_14;
  
  if (param_2 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  IVar1 = SystemTimeToVariantTime(param_1,param_2);
  _memset(&local_14,0,0x10);
  if (((((IVar1 != 0) && (IVar1 = VariantTimeToSystemTime(*param_2,&local_14), IVar1 != 0)) &&
       (param_1->wYear == local_14.wYear)) &&
      ((param_1->wMonth == local_14.wMonth && (param_1->wDay == local_14.wDay)))) &&
     ((param_1->wHour == local_14.wHour &&
      ((param_1->wMinute == local_14.wMinute && (param_1->wSecond == local_14.wSecond)))))) {
    return 1;
  }
  return 0;
}

