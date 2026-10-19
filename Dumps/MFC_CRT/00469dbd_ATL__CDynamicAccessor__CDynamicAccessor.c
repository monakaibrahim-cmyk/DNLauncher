// Address: 0x00469dbd
// Name: ATL::CDynamicAccessor::CDynamicAccessor
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CDynamicAccessor::CDynamicAccessor(enum ATL::DBBLOBHANDLINGENUM,unsigned
   long)
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CDynamicAccessor::CDynamicAccessor
          (CDynamicAccessor *this,DBBLOBHANDLINGENUM param_1,ulong param_2)

{
  *(DBBLOBHANDLINGENUM *)(this + 0x20) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

