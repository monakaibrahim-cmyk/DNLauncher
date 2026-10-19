// Address: 0x00465f59
// Name: Create
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CButton::Create(char const *,unsigned long,struct tagRECT const
   &,class CWnd *,unsigned int)
    public: virtual int __thiscall CButton::Create(wchar_t const *,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
    public: virtual int __thiscall CStatic::Create(char const *,unsigned long,struct tagRECT const
   &,class CWnd *,unsigned int)
    public: virtual int __thiscall CStatic::Create(wchar_t const *,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int)
   
   Library: Visual Studio */

void __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
      undefined4 param_5)

{
  (**(code **)(*(int *)this + 0x54))(L"STATIC",param_1,param_2,param_3,param_4,param_5,0);
  return;
}

