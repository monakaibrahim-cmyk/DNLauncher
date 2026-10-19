// Address: 0x00469588
// Name: HasFont
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl HasFont(struct DLGTEMPLATE const *)
   
   Library: Visual Studio 2005 Release */

int __cdecl HasFont(DLGTEMPLATE *param_1)

{
  uint uVar1;
  
  if (*(short *)((int)&param_1->style + 2) == -1) {
    uVar1._0_2_ = param_1->y;
    uVar1._2_2_ = param_1->cx;
  }
  else {
    uVar1 = param_1->style;
  }
  return uVar1 & 0x40;
}

