// Address: 0x00468201
// Name: CRuntimeClass::Load
// Category: MFC_CRT


/* Library Function - Single Match
    public: static struct CRuntimeClass * __stdcall CRuntimeClass::Load(class CArchive &,unsigned
   int *)
   
   Library: Visual Studio 2005 Release */

CRuntimeClass * CRuntimeClass::Load(CArchive *param_1,uint *param_2)

{
  uint uVar1;
  CRuntimeClass *pCVar2;
  uint uVar3;
  ushort local_4c [2];
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (param_2 != (uint *)0x0) {
    CArchive::operator>>(param_1,local_4c);
    *param_2 = (uint)local_4c[0];
    CArchive::operator>>(param_1,local_4c);
    if (local_4c[0] < 0x40) {
      uVar3 = (uint)local_4c[0];
      uVar1 = CArchive::Read(param_1,local_48,uVar3);
      if (uVar1 == uVar3) {
        local_48[uVar3] = '\0';
        FromName(local_48);
      }
    }
  }
  pCVar2 = (CRuntimeClass *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar2;
}

