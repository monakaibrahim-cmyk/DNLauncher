// Address: 0x004634ff
// Name: Create
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall CActivationContext::Create(struct tagACTCTXA const *)
    public: bool __thiscall CActivationContext::Create(struct tagACTCTXW const *)
   
   Library: Visual Studio 2005 Release */

bool __thiscall Create(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_004cab00 == (code *)0x0) {
    bVar2 = true;
  }
  else if ((param_1 == 0) || (*(int *)this != -1)) {
    bVar2 = false;
  }
  else {
    iVar1 = (*DAT_004cab00)(param_1);
    bVar2 = iVar1 != -1;
    *(int *)this = iVar1;
  }
  return bVar2;
}

