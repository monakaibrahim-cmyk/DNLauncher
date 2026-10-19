// Address: 0x0046b19a
// Name: AFX_EVENT::AFX_EVENT
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall AFX_EVENT::AFX_EVENT(int,long,struct tagDISPPARAMS *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
AFX_EVENT::AFX_EVENT
          (AFX_EVENT *this,int param_1,long param_2,tagDISPPARAMS *param_3,tagEXCEPINFO *param_4,
          uint *param_5)

{
  *(int *)this = param_1;
  *(long *)(this + 4) = param_2;
  *(tagDISPPARAMS **)(this + 8) = param_3;
  *(tagEXCEPINFO **)(this + 0xc) = param_4;
  *(uint **)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

