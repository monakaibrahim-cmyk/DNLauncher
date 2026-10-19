// Address: 0x0046d6f0
// Name: ATL::CAccessorBase::FreeType
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __cdecl ATL::CAccessorBase::FreeType(unsigned short,unsigned char *,struct
   IRowset *)
   
   Library: Visual Studio 2005 Release */

void __cdecl ATL::CAccessorBase::FreeType(ushort param_1,uchar *param_2,IRowset *param_3)

{
  int *piVar1;
  uchar *puVar2;
  
  puVar2 = param_2;
  if (param_2 == (uchar *)0x0) {
    return;
  }
  if ((param_1 & 0x2000) == 0) {
    if (param_1 == 8) {
      SysFreeString(*(BSTR *)param_2);
    }
    else {
      if (param_1 != 9) {
        if (param_1 == 0xc) {
          VariantClear((VARIANTARG *)param_2);
          goto LAB_0046d77e;
        }
        if (param_1 != 0xd) {
          if (((param_1 == 0x88) &&
              (CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
               ::
               CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
                         ((CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
                           *)&param_2,(IUnknown *)param_3), param_2 != (uchar *)0x0)) &&
             ((**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)puVar2,0),
             param_2 != (uchar *)0x0)) {
            (**(code **)(*(int *)param_2 + 8))(param_2);
          }
          goto LAB_0046d77e;
        }
      }
      piVar1 = *(int **)param_2;
      if (piVar1 == (int *)0x0) goto LAB_0046d77e;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  else {
    if (*(SAFEARRAY **)param_2 == (SAFEARRAY *)0x0) goto LAB_0046d77e;
    SafeArrayDestroy(*(SAFEARRAY **)param_2);
  }
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
LAB_0046d77e:
  if (((param_1 & 0x1000) != 0) && ((param_1 & 0x4000) != 0xffffffff)) {
    CoTaskMemFree(*(LPVOID *)(puVar2 + 4));
  }
  return;
}

