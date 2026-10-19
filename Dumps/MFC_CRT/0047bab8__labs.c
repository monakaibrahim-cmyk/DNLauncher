// Address: 0x0047bab8
// Name: _labs
// Category: MFC_CRT


/* Library Function - Single Match
    _labs
   
   Library: Visual Studio 2005 Release */

long __cdecl _labs(long _X)

{
  if (_X < 0) {
    _X = -_X;
  }
  return _X;
}

