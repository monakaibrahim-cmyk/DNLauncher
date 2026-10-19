// Address: 0x0045298b
// Name: CSimpleException::InitString
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  uVar1 = FUN_00452af1(*(uint *)(this + 0x114),(undefined2 *)(this + 0x14),0x80);
  *(uint *)(this + 0x10) = (uint)(uVar1 != 0);
  return;
}

