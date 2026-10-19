// Address: 0x0046a05b
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __thiscall COleControlSite::CreateControl(class CWnd *,struct _GUID const
   &,char const *,unsigned long,struct tagPOINT const *,struct tagSIZE const *,unsigned int,class
   CFile *,int,wchar_t *)
    public: virtual long __thiscall COleControlSite::CreateControl(class CWnd *,struct _GUID const
   &,wchar_t const *,unsigned long,struct tagPOINT const *,struct tagSIZE const *,unsigned int,class
   CFile *,int,wchar_t *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
CreateControl(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
             ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10)

{
  CControlCreationInfo local_20 [24];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  CControlCreationInfo::CControlCreationInfo(local_20);
  (**(code **)(*(int *)this + 0xc4))
            (param_1,param_2,local_20,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

