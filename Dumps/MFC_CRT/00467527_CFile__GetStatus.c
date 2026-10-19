// Address: 0x00467527
// Name: CFile::GetStatus
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CFile::GetStatus(struct CFileStatus &)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CFile::GetStatus(CFile *this,CFileStatus *param_1)

{
  BOOL BVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  CTime local_24 [8];
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  _memset(param_1,0,0x22c);
  ATL::Checked::tcsncpy_s((wchar_t *)(param_1 + 0x22),0x104,*(wchar_t **)(this + 0xc),0xffffffff);
  if (*(HANDLE *)(this + 4) == DAT_004a02b8) {
LAB_00467676:
    iVar2 = 1;
  }
  else {
    BVar1 = GetFileTime(*(HANDLE *)(this + 4),&local_c,&local_14,&local_1c);
    if (BVar1 != 0) {
      DVar3 = GetFileSize(*(HANDLE *)(this + 4),(LPDWORD)0x0);
      *(DWORD *)(param_1 + 0x18) = DVar3;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (DVar3 != 0xffffffff) {
        if (*(int *)(*(LPCWSTR *)(this + 0xc) + -6) == 0) {
          param_1[0x20] = (CFileStatus)0x0;
        }
        else {
          DVar3 = GetFileAttributesW(*(LPCWSTR *)(this + 0xc));
          param_1[0x20] = (CFileStatus)((DVar3 == 0xffffffff) - 1U & (byte)DVar3);
        }
        iVar2 = ATL::CTime::IsValidFILETIME(&local_c);
        if (iVar2 == 0) {
          *(undefined4 *)param_1 = 0;
          *(undefined4 *)(param_1 + 4) = 0;
        }
        else {
          puVar4 = (undefined4 *)ATL::CTime::CTime(local_24,&local_c,-1);
          *(undefined4 *)param_1 = *puVar4;
          *(undefined4 *)(param_1 + 4) = puVar4[1];
        }
        iVar2 = ATL::CTime::IsValidFILETIME(&local_14);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else {
          puVar4 = (undefined4 *)ATL::CTime::CTime(local_24,&local_14,-1);
          *(undefined4 *)(param_1 + 0x10) = *puVar4;
          *(undefined4 *)(param_1 + 0x14) = puVar4[1];
        }
        iVar2 = ATL::CTime::IsValidFILETIME(&local_1c);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        else {
          puVar4 = (undefined4 *)ATL::CTime::CTime(local_24,&local_1c,-1);
          *(undefined4 *)(param_1 + 8) = *puVar4;
          *(undefined4 *)(param_1 + 0xc) = puVar4[1];
        }
        if (*(int *)param_1 == 0 && *(int *)(param_1 + 4) == 0) {
          *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
        }
        if (*(int *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 0) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
        }
        goto LAB_00467676;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

