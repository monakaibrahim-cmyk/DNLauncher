// Address: 0x004771e4
// Name: __wfopen
// Category: MFC_CRT


/* Library Function - Single Match
    __wfopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __wfsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

