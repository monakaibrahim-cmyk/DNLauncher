// Address: 0x0046bc53
// Name: COleControlSite::DoVerb
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __thiscall COleControlSite::DoVerb(long,struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

long __thiscall COleControlSite::DoVerb(COleControlSite *this,long param_1,tagMSG *param_2)

{
  int iVar1;
  long lVar2;
  
  if (((*(int *)(this + 0x50) != 0) && (*(int *)(this + 0x20) != 0)) &&
     (iVar1 = *(int *)(*(int *)(this + 0x20) + 0x20), iVar1 != 0)) {
    lVar2 = (**(code **)(**(int **)(this + 0x50) + 0x2c))
                      (*(int **)(this + 0x50),param_1,param_2,this + 200,0,
                       *(undefined4 *)(iVar1 + 0x20),this + 0x30);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

