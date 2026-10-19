// Address: 0x00464449
// Name: AfxInternalIsIdleMessage
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl AfxInternalIsIdleMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxInternalIsIdleMessage(tagMSG *param_1)

{
  UINT UVar1;
  tagPOINT tVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  
  UVar1 = param_1->message;
  if ((UVar1 == 0x200) || (UVar1 == 0xa0)) {
    p_Var3 = AfxGetThreadState();
    tVar2.x = (param_1->pt).x;
    tVar2.y = (param_1->pt).y;
    iVar4 = CPoint::operator==((CPoint *)(p_Var3 + 0x4c),tVar2);
    if ((iVar4 == 0) || (param_1->message != *(UINT *)(p_Var3 + 0x54))) {
      *(LONG *)(p_Var3 + 0x4c) = (param_1->pt).x;
      *(LONG *)(p_Var3 + 0x50) = (param_1->pt).y;
      *(UINT *)(p_Var3 + 0x54) = param_1->message;
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    return iVar4;
  }
  if ((UVar1 != 0xf) && (UVar1 != 0x118)) {
    return 1;
  }
  return 0;
}

