// Address: 0x0046b3e9
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __thiscall COleControlSite::CreateControl(class CWnd *,struct _GUID const
   &,char const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t *)
    public: virtual long __thiscall COleControlSite::CreateControl(class CWnd *,struct _GUID const
   &,wchar_t const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
CreateControl(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
             ,RECT *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  tagRECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  CopyRect(&local_24,param_5);
  local_c = local_24.right - local_24.left;
  local_14 = local_24.left;
  local_8 = local_24.bottom - local_24.top;
  local_10 = local_24.top;
  (**(code **)(*(int *)this + 0x50))
            (param_1,param_2,param_3,param_4,&local_14,&local_c,param_6,param_7,param_8,param_9);
  return;
}

