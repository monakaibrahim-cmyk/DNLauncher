// Address: 0x00475b36
// Name: __security_check_cookie
// Category: MFC_CRT


/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_004c3750) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}

