// Address: 0x00466ab9
// Name: CNoTrackObject::operator_delete
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __stdcall CNoTrackObject::operator delete(void *)
   
   Library: Visual Studio 2005 Release */

void CNoTrackObject::operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00466ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LocalFree(param_1);
    return;
  }
  return;
}

