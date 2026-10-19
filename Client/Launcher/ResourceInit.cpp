#include "stdafx.h"
#include "ResourceInit.h"
#include "DnControlData.h"
#include "DnDefine_Launcher.h"
#include "DnPatchInfo.h"
#include "resource.h"

#define MAX_CTRL_NUM 34
CRect g_CtrlRect[MAX_CTRL_NUM];

void InitCtrlRect()
{
	int nResID = IDR_XML_CONTROL_DATA + DNPATCHINFO.GetLanguageOffset();
	DNCTRLDATA.SetControlDataFromResource( nResID, PATCH_CONTROL_NAME, g_CtrlRect, MAX_CTRL_NUM );
}

void GetCtrlRect( CRect* pRect, int nMaxNum )
{
	if( pRect == NULL ) return;
	for( int i = 0; i < nMaxNum && i < MAX_CTRL_NUM; i++ )
	{
		pRect[i] = g_CtrlRect[i];
	}
}

int GetLanguageResourceIndexOffset( CString strLanguageParam )
{
	if( strLanguageParam.CompareNoCase( _T("VNM") ) == 0 )
		return 10000;
	return 0;
}
