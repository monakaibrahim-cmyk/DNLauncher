// Address: 0x0047070b
// Name: CreateControl
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CWnd::CreateControl(struct _GUID const &,char const *,unsigned
   long,struct tagPOINT const *,struct tagSIZE const *,class CWnd *,unsigned int,class CFile
   *,int,wchar_t *)
    public: int __thiscall CWnd::CreateControl(struct _GUID const &,wchar_t const *,unsigned
   long,struct tagPOINT const *,struct tagSIZE const *,class CWnd *,unsigned int,class CFile
   *,int,wchar_t *)
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall CreateControl(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  void *in_stack_00000018;
  
  if ((in_stack_00000018 != (void *)0x0) &&
     (bVar1 = FUN_004702ee(in_stack_00000018,0), CONCAT31(extraout_var,bVar1) != 0)) {
    uVar2 = CreateControl(*(void **)((int)in_stack_00000018 + 0x4c),this,param_1);
    return uVar2;
  }
  return 0;
}

