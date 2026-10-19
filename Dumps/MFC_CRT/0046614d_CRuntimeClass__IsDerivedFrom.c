// Address: 0x0046614d
// Name: CRuntimeClass::IsDerivedFrom
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CRuntimeClass::IsDerivedFrom(struct CRuntimeClass const *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CRuntimeClass::IsDerivedFrom(CRuntimeClass *this,CRuntimeClass *param_1)

{
  if ((this != (CRuntimeClass *)0x0) && (param_1 != (CRuntimeClass *)0x0)) {
    do {
      if (this == param_1) {
        return 1;
      }
      this = *(CRuntimeClass **)(this + 0x10);
    } while (this != (CRuntimeClass *)0x0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

