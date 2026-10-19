// Address: 0x00476df1
// Name: __time64
// Category: MFC_CRT


/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__time64_t __cdecl __time64(__time64_t *_Time)

{
  __time64_t _Var1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  _Var1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (__time64_t *)0x0) {
    *_Time = _Var1;
  }
  return _Var1;
}

