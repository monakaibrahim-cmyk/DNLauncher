// Address: 0x0046a101
// Name: _AfxCoCreateInstanceLic
// Category: MFC_CRT


/* Library Function - Single Match
    long __stdcall _AfxCoCreateInstanceLic(struct _GUID const &,struct IUnknown *,unsigned
   long,struct _GUID const &,void * *,wchar_t *)
   
   Library: Visual Studio 2005 Release */

long _AfxCoCreateInstanceLic
               (_GUID *param_1,IUnknown *param_2,ulong param_3,_GUID *param_4,void **param_5,
               wchar_t *param_6)

{
  UINT UVar1;
  HRESULT HVar2;
  long lVar3;
  wchar_t *pwVar4;
  wchar_t *local_8;
  
  UVar1 = SysStringLen(param_6);
  if (UVar1 == 0) {
    param_6 = (wchar_t *)0x0;
    HVar2 = CoGetClassObject(param_1,param_3,(LPVOID)0x0,(IID *)&riid_004ab6ec,&param_6);
    if (HVar2 < 0) {
      return HVar2;
    }
    lVar3 = (**(code **)(*(int *)param_6 + 0xc))(param_6,param_2,param_4,param_5);
    pwVar4 = param_6;
  }
  else {
    local_8 = (wchar_t *)0x0;
    HVar2 = CoGetClassObject(param_1,param_3,(LPVOID)0x0,(IID *)&riid_004ab83c,&local_8);
    if (HVar2 < 0) {
      return HVar2;
    }
    lVar3 = (**(code **)(*(int *)local_8 + 0x1c))(local_8,param_2,0,param_4,param_6,param_5);
    pwVar4 = local_8;
  }
  (**(code **)(*(int *)pwVar4 + 8))(pwVar4);
  return lVar3;
}

