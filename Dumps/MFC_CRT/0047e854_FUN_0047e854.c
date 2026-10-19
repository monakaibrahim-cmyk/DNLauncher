// Address: 0x0047e854
// Name: FUN_0047e854
// Category: MFC_CRT


LPVOID FUN_0047e854(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(dwTlsIndex_004c3db4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_0047e7dd((int)lpTlsValue_004cb3b8);
    TlsSetValue(dwTlsIndex_004c3db4,lpTlsValue);
  }
  return lpTlsValue;
}

