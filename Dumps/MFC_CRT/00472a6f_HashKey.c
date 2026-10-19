// Address: 0x00472a6f
// Name: HashKey
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall CMapStringToOb::HashKey(wchar_t const *)const 
    public: unsigned int __thiscall CMapStringToPtr::HashKey(wchar_t const *)const 
   
   Library: Visual Studio 2005 Release */

int HashKey(ushort *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 * 0x21 + (uint)*param_1;
  }
  return iVar1;
}

