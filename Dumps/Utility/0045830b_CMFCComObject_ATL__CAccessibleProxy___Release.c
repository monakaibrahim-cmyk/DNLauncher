// Address: 0x0045830b
// Name: CMFCComObject<ATL::CAccessibleProxy>::Release
// Category: Utility


/* Library Function - Single Match
    public: virtual unsigned long __stdcall CMFCComObject<class
   ATL::CAccessibleProxy>::Release(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

ulong CMFCComObject<ATL::CAccessibleProxy>::Release(void)

{
  int *piVar1;
  ulong uVar2;
  int *in_stack_00000004;
  
  piVar1 = in_stack_00000004 + 5;
  *piVar1 = *piVar1 + -1;
  uVar2 = in_stack_00000004[5];
  if ((*piVar1 == 0) && (in_stack_00000004 != (int *)0x0)) {
    (**(code **)(*in_stack_00000004 + 0x70))(1);
  }
  return uVar2;
}

