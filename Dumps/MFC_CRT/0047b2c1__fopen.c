// Address: 0x0047b2c1
// Name: _fopen
// Category: MFC_CRT


/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

