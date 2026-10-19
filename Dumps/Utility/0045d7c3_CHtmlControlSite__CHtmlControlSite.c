// Address: 0x0045d7c3
// Name: CHtmlControlSite::CHtmlControlSite
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CHtmlControlSite::CHtmlControlSite(class COleControlContainer *)
   
   Library: Visual Studio 2005 Release */

CHtmlControlSite * __thiscall
CHtmlControlSite::CHtmlControlSite(CHtmlControlSite *this,COleControlContainer *param_1)

{
  COleControlSite::COleControlSite((COleControlSite *)this,param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0xec) = XDocHostUIHandler::vftable;
  return this;
}

