// Address: 0x0046b2b5
// Name: ATL::CDynamicAccessor::GetColumnName
// Category: MFC_CRT


/* Library Function - Single Match
    public: wchar_t * __thiscall ATL::CDynamicAccessor::GetColumnName(unsigned long)const 
   
   Library: Visual Studio 2005 Release */

wchar_t * __thiscall ATL::CDynamicAccessor::GetColumnName(CDynamicAccessor *this,ulong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    pwVar2 = *(wchar_t **)(param_1 * 0x30 + *(int *)(this + 0x14));
  }
  else {
    pwVar2 = (wchar_t *)0x0;
  }
  return pwVar2;
}

