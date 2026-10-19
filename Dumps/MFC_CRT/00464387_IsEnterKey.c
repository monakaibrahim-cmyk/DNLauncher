// Address: 0x00464387
// Name: IsEnterKey
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl IsEnterKey(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl IsEnterKey(tagMSG *param_1)

{
  if ((param_1->message == 0x100) && (param_1->wParam == 0xd)) {
    return 1;
  }
  return 0;
}

