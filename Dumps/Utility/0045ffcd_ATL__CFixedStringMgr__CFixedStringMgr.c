// Address: 0x0045ffcd
// Name: ATL::CFixedStringMgr::CFixedStringMgr
// Category: Utility


/* Library Function - Single Match
    public: __thiscall ATL::CFixedStringMgr::CFixedStringMgr(struct ATL::CStringData *,int,struct
   ATL::IAtlStringMgr *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CFixedStringMgr::CFixedStringMgr
          (CFixedStringMgr *this,CStringData *param_1,int param_2,IAtlStringMgr *param_3)

{
  *(IAtlStringMgr **)(this + 4) = param_3;
  *(CStringData **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(*(int *)(this + 8) + 8) = param_2;
  **(undefined4 **)(this + 8) = this;
  *(undefined2 *)(*(int *)(this + 8) + 0x10) = 0;
  return;
}

