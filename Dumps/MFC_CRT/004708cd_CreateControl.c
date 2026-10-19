// Address: 0x004708cd
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,char const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t
   *,class COleControlSite * *)
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,wchar_t const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t
   *,class COleControlSite * *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CreateControl(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,
             undefined4 param_4,RECT *param_5)

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
  CreateControl(this,param_1,param_2);
  return;
}

