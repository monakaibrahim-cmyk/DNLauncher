// Address: 0x00416220
// Name: CFileException::~CFileException
// Category: Launcher


/* Library Function - Single Match
    public: virtual __thiscall CFileException::~CFileException(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CFileException::~CFileException(CFileException *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(this + 0x10) + -0x10);
  *(undefined ***)this = vftable;
  piVar1 = (int *)(*(int *)(this + 0x10) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  return;
}

