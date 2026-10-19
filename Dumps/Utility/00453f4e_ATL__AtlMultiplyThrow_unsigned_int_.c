// Address: 0x00453f4e
// Name: ATL::AtlMultiplyThrow<unsigned_int>
// Category: Utility


/* Library Function - Single Match
    unsigned int __cdecl ATL::AtlMultiplyThrow<unsigned int>(unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint __cdecl ATL::AtlMultiplyThrow<unsigned_int>(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint local_8;
  
  puVar1 = (undefined4 *)AtlMultiply<unsigned_long>(&local_8,param_1,param_2);
  if ((int)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200(puVar1);
  }
  return local_8;
}

