// Address: 0x0042e920
// Name: FUN_0042e920
// Category: Launcher


void FUN_0042e920(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0xffffffff;
  in_EAX[1] = 0xffffffff;
  in_EAX[3] = 0;
  *in_EAX = TiXmlAttribute::vftable;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0xf;
  *(undefined1 *)(in_EAX + 6) = 0;
  in_EAX[0x12] = 0xf;
  in_EAX[0x11] = 0;
  *(undefined1 *)(in_EAX + 0xd) = 0;
  in_EAX[4] = 0;
  in_EAX[0x14] = in_EAX;
  in_EAX[0x13] = in_EAX;
  return;
}

