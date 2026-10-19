// Address: 0x00464382
// Name: AfxInternalProcessWndProcException
// Category: MFC_CRT


long AfxInternalProcessWndProcException(CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
  if (param_2->message == 1) {
    lVar1 = -1;
  }
  else {
    if (param_2->message == 0xf) {
      ValidateRect(param_2->hwnd,(RECT *)0x0);
    }
    lVar1 = 0;
  }
  return lVar1;
}

