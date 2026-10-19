// Address: 0x0045be7a
// Name: CGdiObject::FromHandle
// Category: Utility


/* Library Function - Single Match
    public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)
   
   Library: Visual Studio 2005 Release */

CGdiObject * CGdiObject::FromHandle(void *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHGDIOBJ(1);
  pCVar1 = CHandleMap::FromHandle(this,param_1);
  return (CGdiObject *)pCVar1;
}

