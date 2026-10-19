// Address: 0x00466aa1
// Name: CNoTrackObject::operator_new
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void * __stdcall CNoTrackObject::operator new(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * CNoTrackObject::operator_new(uint param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529b4();
  }
  return pvVar1;
}

