// Address: 0x00461fe5
// Name: SerializeElements<HWND__*>
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall SerializeElements<struct HWND__ *>(class CArchive &,struct HWND__ * *,int)
   
   Library: Visual Studio 2005 Release */

void SerializeElements<HWND__*>(CArchive *param_1,HWND__ **param_2,int param_3)

{
  uint uVar1;
  
  if ((param_3 != 0) && (param_2 == (HWND__ **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0x1fffffff;
      if ((uint)param_3 < 0x1fffffff) {
        uVar1 = param_3;
      }
      CArchive::EnsureRead(param_1,param_2,uVar1 * 4);
      param_2 = param_2 + uVar1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0x1fffffff;
      if ((uint)param_3 < 0x1fffffff) {
        uVar1 = param_3;
      }
      CArchive::Write(param_1,param_2,uVar1 * 4);
      param_2 = param_2 + uVar1;
    }
  }
  return;
}

