// Address: 0x00464c19
// Name: CRecentFileList::operator[]
// Category: MFC_CRT


/* Library Function - Single Match
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &
   __thiscall CRecentFileList::operator[](int)
   
   Library: Visual Studio 2005 Release */

CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> * __thiscall
CRecentFileList::operator[](CRecentFileList *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)
           (*(int *)(this + 8) + param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

