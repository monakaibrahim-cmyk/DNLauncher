// Address: 0x00470e17
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CWnd::CreateControl(struct _GUID const &,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,class CFile *,int,wchar_t *)
    public: int __thiscall CWnd::CreateControl(struct _GUID const &,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,class CFile *,int,wchar_t *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CreateControl(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,RECT *param_4)

{
  tagRECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  CopyRect(&local_24,param_4);
  local_c = local_24.right - local_24.left;
  local_14 = local_24.left;
  local_8 = local_24.bottom - local_24.top;
  local_10 = local_24.top;
  CreateControl(this,param_1);
  return;
}

