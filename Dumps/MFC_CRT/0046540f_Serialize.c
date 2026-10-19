// Address: 0x0046540f
// Name: Serialize
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CList<struct HWND__ *,struct HWND__ *>::Serialize(class CArchive
   &)
    public: virtual void __thiscall CList<class IControlSiteFactory *,class IControlSiteFactory
   *>::Serialize(class CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  pCVar1 = param_1;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar2 = CArchive::ReadCount(param_1); uVar2 != 0; uVar2 = uVar2 - 1) {
      SerializeElements<HWND__*>(pCVar1,(HWND__ **)&param_1,1);
      CList<HWND__*,HWND__*>::AddTail(this,(HWND__ *)param_1);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    for (puVar3 = *(undefined4 **)((int)this + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      SerializeElements<HWND__*>(pCVar1,(HWND__ **)(puVar3 + 2),1);
    }
  }
  return;
}

