// Address: 0x0045f5d5
// Name: ATL::AtlAdd<unsigned_long>
// Category: Utility


/* Library Function - Single Match
    long __cdecl ATL::AtlAdd<unsigned long>(unsigned long *,unsigned long,unsigned long)
   
   Library: Visual Studio 2005 Release */

long __cdecl ATL::AtlAdd<unsigned_long>(ulong *param_1,ulong param_2,ulong param_3)

{
  if (-param_2 - 1 < param_3) {
    return -0x7ff8ffa9;
  }
  *param_1 = param_2 + param_3;
  return 0;
}

