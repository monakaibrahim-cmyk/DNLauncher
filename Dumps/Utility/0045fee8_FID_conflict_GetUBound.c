// Address: 0x0045fee8
// Name: FID_conflict:GetUBound
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall COleSafeArray::GetLBound(unsigned long,long *)
    public: void __thiscall COleSafeArray::GetUBound(unsigned long,long *)
   
   Library: Visual Studio 2005 Release */

void __thiscall FID_conflict_GetUBound(void *this,UINT param_1,LONG *param_2)

{
  HRESULT HVar1;
  
  HVar1 = SafeArrayGetLBound(*(SAFEARRAY **)((int)this + 8),param_1,param_2);
  AfxCheckError(HVar1);
  return;
}

