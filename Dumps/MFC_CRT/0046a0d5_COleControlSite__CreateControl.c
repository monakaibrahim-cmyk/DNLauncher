// Address: 0x0046a0d5
// Name: COleControlSite::CreateControl
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall COleControlSite::CreateControl(class CWnd *,class CControlCreationInfo
   const &,unsigned long,struct tagPOINT const *,struct tagSIZE const *,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall
COleControlSite::CreateControl
          (COleControlSite *this,CWnd *param_1,CControlCreationInfo *param_2,ulong param_3,
          tagPOINT *param_4,tagSIZE *param_5,uint param_6)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(int *)this + 0xc4))
                    (param_1,param_2 + 8,param_2,0,param_3,param_4,param_5,param_6,0,0,0);
  return lVar1;
}

