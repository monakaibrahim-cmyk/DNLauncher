// Address: 0x00470503
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,char const *,unsigned long,struct tagPOINT const *,struct tagSIZE const *,unsigned int,class
   CFile *,int,wchar_t *,class COleControlSite * *)
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,wchar_t const *,unsigned long,struct tagPOINT const *,struct tagSIZE const *,unsigned int,class
   CFile *,int,wchar_t *,class COleControlSite * *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CreateControl(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_20 = 2;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_004703c2(this,param_1,param_2,&local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

