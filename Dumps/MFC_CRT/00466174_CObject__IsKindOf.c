// Address: 0x00466174
// Name: CObject::IsKindOf
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CObject::IsKindOf(struct CRuntimeClass const *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CObject::IsKindOf(CObject *this,CRuntimeClass *param_1)

{
  CRuntimeClass *this_00;
  int iVar1;
  
  if (this != (CObject *)0x0) {
    this_00 = (CRuntimeClass *)(*(code *)**(undefined4 **)this)();
    if (this_00 != (CRuntimeClass *)0x0) {
      iVar1 = CRuntimeClass::IsDerivedFrom(this_00,param_1);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

