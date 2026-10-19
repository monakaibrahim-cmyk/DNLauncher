// Address: 0x0047022d
// Name: CControlCreationInfo::IsManaged
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CControlCreationInfo::IsManaged(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CControlCreationInfo::IsManaged(CControlCreationInfo *this)

{
  return (uint)(*(int *)this != 2);
}

