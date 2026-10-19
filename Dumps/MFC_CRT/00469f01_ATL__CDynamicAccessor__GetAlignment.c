// Address: 0x00469f01
// Name: ATL::CDynamicAccessor::GetAlignment
// Category: MFC_CRT


/* Library Function - Single Match
    public: static unsigned int __cdecl ATL::CDynamicAccessor::GetAlignment(unsigned short)
   
   Library: Visual Studio 2005 Release */

uint __cdecl ATL::CDynamicAccessor::GetAlignment(ushort param_1)

{
  if ((param_1 & 0x4000) != 0) {
    return 4;
  }
  if ((param_1 & 0x2000) != 0) {
    return 4;
  }
  if ((param_1 & 0x1000) != 0) {
    return 2;
  }
  if (0x48 < param_1) {
    if ((param_1 != 0x80) && (param_1 != 0x81)) {
      if (param_1 == 0x82) {
        return 2;
      }
      if (param_1 != 0x83) {
        if (param_1 == 0x85) {
          return 2;
        }
        if (param_1 == 0x86) {
          return 2;
        }
        if (param_1 == 0x87) {
          return 2;
        }
        return 8;
      }
    }
switchD_00469f33_caseD_2:
    return 1;
  }
  if (param_1 == 0x48) {
switchD_00469f33_caseD_3:
    return 4;
  }
  switch(param_1) {
  case 2:
  case 0xb:
  case 0x12:
    return 2;
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0x13:
    goto switchD_00469f33_caseD_3;
  default:
    return 8;
  case 0x10:
  case 0x11:
  case 0x14:
  case 0x15:
    goto switchD_00469f33_caseD_2;
  }
}

