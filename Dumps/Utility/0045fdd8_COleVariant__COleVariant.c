// Address: 0x0045fdd8
// Name: COleVariant::COleVariant
// Category: Utility


/* Library Function - Single Match
    public: __thiscall COleVariant::COleVariant(long,unsigned short)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleVariant::COleVariant(COleVariant *this,long param_1,ushort param_2)

{
  if (param_2 == 10) {
    *(undefined2 *)this = 10;
  }
  else {
    if (param_2 == 0xb) {
      *(undefined2 *)this = 0xb;
      *(ushort *)(this + 8) = -(ushort)(param_1 != 0);
      return;
    }
    if (param_2 == 0x16) {
      *(undefined2 *)this = 0x16;
    }
    else if (param_2 == 0x17) {
      *(undefined2 *)this = 0x17;
    }
    else if (param_2 == 0x19) {
      *(undefined2 *)this = 0x19;
    }
    else if (param_2 == 0x13) {
      *(undefined2 *)this = 0x13;
    }
    else {
      *(undefined2 *)this = 3;
    }
  }
  *(long *)(this + 8) = param_1;
  return;
}

