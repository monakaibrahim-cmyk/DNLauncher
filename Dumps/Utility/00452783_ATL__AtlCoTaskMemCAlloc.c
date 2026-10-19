// Address: 0x00452783
// Name: ATL::AtlCoTaskMemCAlloc
// Category: Utility


/* Library Function - Single Match
    void * __cdecl ATL::AtlCoTaskMemCAlloc(unsigned long,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl ATL::AtlCoTaskMemCAlloc(ulong param_1,ulong param_2)

{
  long lVar1;
  LPVOID pvVar2;
  ulong local_8;
  
  local_8 = 0;
  lVar1 = AtlMultiply<unsigned_long>(&local_8,param_1,param_2);
  if (lVar1 < 0) {
    return (void *)0x0;
  }
  pvVar2 = CoTaskMemAlloc(local_8);
  return pvVar2;
}

