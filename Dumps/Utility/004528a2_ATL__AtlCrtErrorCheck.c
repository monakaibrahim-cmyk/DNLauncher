// Address: 0x004528a2
// Name: ATL::AtlCrtErrorCheck
// Category: Utility


/* Library Function - Single Match
    int __cdecl ATL::AtlCrtErrorCheck(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl ATL::AtlCrtErrorCheck(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return param_1;
  }
  if (param_1 == 0xc) {
    puVar1 = (undefined4 *)0x8007000e;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    puVar1 = (undefined4 *)0x80070057;
  }
  else {
    if (param_1 == 0x50) {
      return param_1;
    }
    puVar1 = (undefined4 *)0x80004005;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200(puVar1);
}

