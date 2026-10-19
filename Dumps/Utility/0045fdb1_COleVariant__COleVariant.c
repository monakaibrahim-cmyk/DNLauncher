// Address: 0x0045fdb1
// Name: COleVariant::COleVariant
// Category: Utility


/* Library Function - Single Match
    public: __thiscall COleVariant::COleVariant(short,unsigned short)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleVariant::COleVariant(COleVariant *this,short param_1,ushort param_2)

{
  if (param_2 == 0xb) {
    *(undefined2 *)this = 0xb;
    param_1 = -(ushort)(param_1 != 0);
  }
  else {
    *(undefined2 *)this = 2;
  }
  *(short *)(this + 8) = param_1;
  return;
}

