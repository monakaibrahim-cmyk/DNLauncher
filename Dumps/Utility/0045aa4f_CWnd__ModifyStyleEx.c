// Address: 0x0045aa4f
// Name: CWnd::ModifyStyleEx
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::ModifyStyleEx(unsigned long,unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::ModifyStyleEx(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    iVar1 = ModifyStyleEx(*(HWND__ **)(this + 0x20),param_1,param_2,param_3);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045aa73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(int **)(this + 0x50) + 0x84))();
  return iVar1;
}

