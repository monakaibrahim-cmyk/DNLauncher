// Address: 0x00482281
// Name: _iswctype
// Category: MFC_CRT


/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_004c4870 + (uint)_C * 2) & _Type);
  }
  if (DAT_004cb878 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_004c4500,1,(wchar_t *)&_C,1,local_8,DAT_004c4424,
               DAT_004c4434);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}

