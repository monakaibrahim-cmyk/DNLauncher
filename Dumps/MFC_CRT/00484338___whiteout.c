// Address: 0x00484338
// Name: __whiteout
// Category: MFC_CRT


/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2005 Release */

uint __thiscall __whiteout(void *this,FILE *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  do {
    *unaff_ESI = *unaff_ESI + 1;
    uVar1 = __inc(this,param_1);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    this = (void *)(uVar1 & 0xff);
    iVar2 = _isspace((int)this);
  } while (iVar2 != 0);
  return uVar1;
}

