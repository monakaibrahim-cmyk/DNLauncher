// Address: 0x0046b28b
// Name: ATL::CDynamicAccessor::GetValue
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * __thiscall ATL::CDynamicAccessor::GetValue(unsigned long)const 
   
   Library: Visual Studio 2005 Release */

void * __thiscall ATL::CDynamicAccessor::GetValue(CDynamicAccessor *this,ulong param_1)

{
  bool bVar1;
  void *pvVar2;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    pvVar2 = (void *)(*(int *)(param_1 * 0x30 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8));
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

