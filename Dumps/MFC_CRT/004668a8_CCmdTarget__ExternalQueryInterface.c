// Address: 0x004668a8
// Name: CCmdTarget::ExternalQueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::ExternalQueryInterface(void const *,void * *)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CCmdTarget::ExternalQueryInterface(CCmdTarget *this,void *param_1,void **param_2)

{
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = (**(code **)**(undefined4 **)(this + 8))(*(undefined4 **)(this + 8),param_1,param_2);
    return uVar1;
  }
  uVar1 = InternalQueryInterface(this,param_1,param_2);
  return uVar1;
}

