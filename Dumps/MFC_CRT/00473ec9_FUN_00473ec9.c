// Address: 0x00473ec9
// Name: FUN_00473ec9
// Category: MFC_CRT


void __fastcall FUN_00473ec9(undefined4 *param_1)

{
  *param_1 = CArray<CArchive::LoadArrayObjType,CArchive::LoadArrayObjType_const&>::vftable;
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}

