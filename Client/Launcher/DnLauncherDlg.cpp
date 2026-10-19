// DnLauncherDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DnLauncher.h"
#include "DnLauncherDlg.h"
#include "DnHtmlView.h"
#include "DnPatchThread.h"
#include "DnOptionDlg.h"


#include "ResourceInit.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

extern CDnPatchDownloadThread* g_pPatchDownloadThread;
extern stDownloadInfoUpdateData	g_DownloadInfoData;
extern CString g_szCmdLine;
extern int g_nInitErrorCode;


struct DownloadStateString
{
	int nStateIndex;
	int nStringID;
};

DownloadStateString g_DownloadStateString[] = 
{
	{ PATCH_NONE,						-1	},
	{ PATCH_CHECK_VERSION,				(STR_CONFIRM_PATCH_VER)	},
	{ PATCH_CHECK_VERSION_FAILED,		(STR_CONFIRM_PATCH_VER_FAILED)	},
	{ PATCH_DOWNLOAD_DATA,				(STR_PATCH_DATA_DOWNLOADING)	},
	{ PATCH_DOWNLOAD_DATA_FAILED,		(STR_PATCH_DATA_DOWNLOADING_FAILED)	},
	{ PATCH_MD5_CHECK,					(STR_PATCH_MD5_CHECK)	},
	{ PATCH_MD5_CHECK_FAILED,			(STR_PATCH_MD5_CHECK_FAILED)	},
	{ PATCH_APPLY_PAK_FILE,				(STR_PATCH_APPLY_PAK_FILE	)	},
	{ PATCH_APPLY_PAK_FILE_FAILED,		(STR_PATCH_APPLY_PAK_FILE_FAILED)	},
	{ PATCH_APPLY_PAK_FILE_END,			-1	},
	{ PATCH_COMPLETE,					(STR_PATCH_COMPLETE)	},
	{ PATCH_LAUNCHER,					-1	},
	{ PATCH_FAILED,						(STR_PATCH_FAILED)	},
	{ PATCH_TERMINATE,					(STR_PATCH_TERMINATE)	},
};

// CDnLauncherDlg dialog
CDnLauncherDlg::CDnLauncherDlg( CWnd* pParent )
: CDialog(CDnLauncherDlg::IDD, pParent)
, m_dwWidth( 0 )
, m_dwHeight( 0 )
, m_dwFlags ( 0 )
, m_emDownloadPatchState( PATCH_NONE )
, m_nMaxCtrlNum( 0 )
, m_pDnHtmlView( NULL )
, m_pDownloadProgress( NULL )
, m_pFileCountProgress( NULL )
, m_pDownloadProgressBitmap( NULL )
, m_pFileCountProgressBitmap( NULL )
, m_nDownloadProgressMin( 0 )
, m_nDownloadProgressMax( 0 )
, m_nCurrentFileCount( 0 )
, m_nTotalFileCount( 0 )
, m_fDownloadRate( 0.0f )
, m_bDownloading( FALSE )
, m_staticBaseColor( WHITE )
, m_dcBkGrnd( NULL )
, m_pRectCtrl( NULL )
, m_bUseX64( FALSE )
, m_bUseDX11( FALSE )
{
	m_hIcon = AfxGetApp()->LoadIcon( IDR_MAINFRAME );
	EnumDisplayMode( m_vecDisplayMode );
	m_pntMouse.x = 0;
	m_pntMouse.y = 0;
	m_nMaxCtrlNum = em_MaxNum;
	m_pRectCtrl = new CRect[em_MaxNum];
}

CDnLauncherDlg* CDnLauncherDlg::CreateLauncherDlg()
{
	return (new CDnLauncherDlg());
}

void CDnLauncherDlg::DoDataExchange( CDataExchange* pDX )
{
	CDialog::DoDataExchange( pDX );

	// Button Ctrl
	DDX_Control( pDX, IDC_CHECK_DIRECT_GAMESTART, m_BtnCheckDirectGameStart );
	DDX_Control( pDX, IDC_BTN_CANCEL, m_BtnCancel );
	DDX_Control( pDX, IDC_BTN_GAMESTART, m_BtnStartGame );
	DDX_Control( pDX, IDC_BTN_OPTION, m_BtnGameOption );
	DDX_Control( pDX, IDC_BTN_CLOSE, m_BtnClose );
	DDX_Control( pDX, IDC_BTN_MINIMUM, m_BtnMinimum );
// ProgressBar Ctrl
	DDX_Control( pDX, IDC_STATIC_PROGRESS_DOWNLOAD, m_StaticDownloadProgress );
	DDX_Control( pDX, IDC_STATIC_PROGRESS_COUNT, m_StaticFileCountProgress );

	// Static Text
	DDX_Text( pDX, IDC_LAUNCHER_VERSION, m_strLauncherVersion );
	DDX_Text( pDX, IDC_FILE_NAME, m_strFileName );
	DDX_Text( pDX, IDC_FILE_SIZE, m_strFileSize );
	DDX_Text( pDX, IDC_TIME_LEFT, m_strTimeLeft );
	DDX_Text( pDX, IDC_FILE_COUNT, m_strFileCount );
	DDX_Text( pDX, IDC_DOWNLOAD_PERCENTAGE, m_strDownloadPercentage );
	DDX_Text( pDX, IDC_DOWNLOAD_STATE, m_strDownloadState );
	DDX_Text( pDX, IDC_DIRECT_START, m_strDirectGameStart );
// Static Text Ctrl
	DDX_Control( pDX, IDC_LAUNCHER_VERSION, m_StaticLauncherVersion );
	DDX_Control( pDX, IDC_FILE_NAME, m_StaticFileName );
	DDX_Control( pDX, IDC_FILE_SIZE, m_StaticFileSize );
	DDX_Control( pDX, IDC_TIME_LEFT, m_StaticTimeLeft );
	DDX_Control( pDX, IDC_FILE_COUNT, m_StaticFileCount );
	DDX_Control( pDX, IDC_DOWNLOAD_PERCENTAGE, m_StaticDownloadPercentage );
	DDX_Control( pDX, IDC_DOWNLOAD_STATE, m_StaticDownloadState );
	DDX_Control( pDX, IDC_DIRECT_START, m_StaticDirectGameStart );
	DDX_Control( pDX, IDC_BTN_DX9, m_BtnDX9 );
	DDX_Control( pDX, IDC_BTN_DX11, m_BtnDX11 );
	DDX_Control( pDX, IDC_BTN_ENG, m_BtnENG );
	DDX_Control( pDX, IDC_BTN_VNM, m_BtnVNM );
	DDX_Control( pDX, IDC_STATIC_SELECT_LANGUAGE, m_StaticSelectLanguage );
	DDX_Control( pDX, IDC_STATIC_HOMEPAGELINK, m_StaticHomepageLink );
}


BEGIN_MESSAGE_MAP( CDnLauncherDlg, CDialog )
	ON_WM_DESTROY()
	ON_WM_PAINT()
	ON_WM_TIMER()
	ON_WM_ERASEBKGND()
	ON_WM_CTLCOLOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_QUERYDRAGICON()
	ON_MESSAGE( WM_STATUS_MSG, OnStatusMsg )
	// Button Ctrl Click Message
	ON_BN_CLICKED( IDC_CHECK_DIRECT_GAMESTART, &CDnLauncherDlg::OnClickedCheckDirectGamestart )
	ON_BN_CLICKED( IDC_BTN_CANCEL, &CDnLauncherDlg::OnClickButtonCancel )
	ON_BN_CLICKED( IDC_BTN_GAMESTART, &CDnLauncherDlg::OnClickButtonGameStart )
	ON_BN_CLICKED( IDC_BTN_OPTION, &CDnLauncherDlg::OnClickButtonOption )
	ON_BN_CLICKED( IDC_BTN_CLOSE, &CDnLauncherDlg::OnClickButtonClose )
	ON_BN_CLICKED( IDC_BTN_MINIMUM, &CDnLauncherDlg::OnClickMinimumBtn )
	ON_BN_CLICKED( IDC_BTN_DX9, &CDnLauncherDlg::OnClickBtnDX9 )
	ON_BN_CLICKED( IDC_BTN_DX11, &CDnLauncherDlg::OnClickBtnDX11 )
	ON_BN_CLICKED( IDC_BTN_ENG, &CDnLauncherDlg::OnClickBtnENG )
	ON_BN_CLICKED( IDC_BTN_VNM, &CDnLauncherDlg::OnClickBtnVNM )
	ON_STN_CLICKED( IDC_STATIC_HOMEPAGELINK, &CDnLauncherDlg::OnClickHomepageLink )
END_MESSAGE_MAP()


void CDnLauncherDlg::OnDestroy()
{
	m_vecDisplayMode.clear();
	m_Font.DeleteObject();

	SAFE_DELETE( m_pDownloadProgress );
	SAFE_DELETE( m_pFileCountProgress );
	SAFE_DELETE( m_pDownloadProgressBitmap );
	SAFE_DELETE( m_pFileCountProgressBitmap );

	// Thread Terminate
	if( g_pPatchDownloadThread )
	{
		g_pPatchDownloadThread->TerminateThread();
		g_pPatchDownloadThread->WaitForTerminate();
	}
	LogWnd::TraceLog( _T( "Thread End") );
	SAFE_DELETE( g_pPatchDownloadThread );

	LogWnd::DestroyLog();

	SAFE_DELETE_ARRAY( m_pRectCtrl );

	CDialog::OnDestroy();
}

BOOL CDnLauncherDlg::InitFail()
{
	CString strError;
	strError.Format( _S( STR_LAUNCHER_INIT_FAILED + DNPATCHINFO.GetLanguageOffset() ), g_nInitErrorCode );
	LogWnd::Log( LogLevel::Error, strError );
	AfxMessageBox( strError );
	CDialog::DestroyWindow();
	return FALSE;
}

// CDnLauncherDlg message handlers
BOOL CDnLauncherDlg::OnInitDialog()
{
	LogWnd::TraceLog( L"InitDialog Start!" );
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon( m_hIcon, TRUE );	// Set big icon
	SetIcon( m_hIcon, FALSE );	// Set small icon

	this->SetWindowText( _S( STR_DRAGONNEST_LAUNCHER + DNPATCHINFO.GetLanguageOffset() ) );
	DNOPTIONDATA.LoadConfigOption( this->m_hWnd );		// Load config options

	if( !InitInterface() )		// Initialize UI controls
	{
		g_nInitErrorCode = INIT_ERROR_INTERFACE;
		return InitFail();
	}

	if( !InitWebpage() )		// Initialize webpage control
	{
		g_nInitErrorCode = INIT_ERROR_WEBPAGE;
		return InitFail();
	}

NavigateHtml();

	m_strLauncherVersion.Format( _T("Ver.%d"), DNPATCHINFO.GetClientVersion() );
	SetTimer( TEVENT_REFRESH_TEXTINFO, 40, NULL );		// Refresh text timer
	LogWnd::TraceLog( L"InitDialog Success!" );

StartPatchDownloadThread();
return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDnLauncherDlg::NavigateHtml()
{
if( m_pDnHtmlView )
		m_pDnHtmlView->Navigate( DNPATCHINFO.GetGuidepageUrl() );
}

BOOL CDnLauncherDlg::InitWebpage()
{
	LogWnd::TraceLog( L"InitWebpage" );
	// Move webpage view to matched control position
	CCreateContext pContext;
	CWnd* pFrameWnd = this;
	pContext.m_pCurrentDoc = NULL;
	pContext.m_pNewViewClass = RUNTIME_CLASS( CDnView );
	CDnView *pView = (CDnView*)((CFrameWnd*)pFrameWnd)->CreateView( &pContext );
	if( pView == NULL )
		return FALSE;
	pView->ShowWindow( SW_SHOW );

	pContext.m_pCurrentDoc = NULL;
	pContext.m_pNewViewClass = RUNTIME_CLASS( CDnHtmlView );
	m_pDnHtmlView = (CDnHtmlView*)((CFrameWnd*)pFrameWnd)->CreateView( &pContext );
	if( m_pDnHtmlView == NULL )
		return FALSE;
	m_pDnHtmlView->ShowWindow( SW_SHOW );
	m_pDnHtmlView->MoveWindow( GetControlPos( em_WebPageHtml ) );

	return TRUE;
}

BOOL CDnLauncherDlg::InitInterface()
{
	LogWnd::TraceLog( L"InitInterface" );
	// -- Background -- //
	if( !InitBackground() )
		return FALSE;

	// -- Control -- //
	InitCtrlRect();
	GetCtrlRect( m_pRectCtrl, m_nMaxCtrlNum );	// Retrieve control rectangles
	InitControl();

	// -- Transparent -- //
	int window_style = GetWindowLong( m_hWnd, GWL_EXSTYLE );

	if( !( window_style & WS_EX_LAYERED ) )
		SetWindowLong( m_hWnd, GWL_EXSTYLE, window_style | WS_EX_LAYERED );

	HMODULE h_user32_dll = GetModuleHandle( L"USER32.DLL" );
	if( h_user32_dll != NULL )
	{
		BOOL (WINAPI *fp_set_layered_window_attributes)(HWND, COLORREF, BYTE, DWORD) = 
			(BOOL (WINAPI *)(HWND, COLORREF, BYTE, DWORD))GetProcAddress(h_user32_dll, 
			"SetLayeredWindowAttributes");

		if( fp_set_layered_window_attributes != NULL )	// Support transparent layered window if available
			(*fp_set_layered_window_attributes)( m_hWnd, RGB( 255, 0, 255 ), 0, LWA_COLORKEY );
	}

	return TRUE;
}

BOOL CDnLauncherDlg::InitBackground()
{
	int nBgID = IDR_PNG_BACK_GROUND + DNPATCHINFO.GetLanguageOffset();
	HRSRC hRes = FindResource( NULL, MAKEINTRESOURCE( nBgID ), L"PNG" );
	if( !hRes )
		hRes = FindResource( NULL, MAKEINTRESOURCE( nBgID ), L"JPG" );
	if( !hRes )
		return FALSE;

	DWORD dwSize = SizeofResource( NULL, hRes );
	HGLOBAL hGlob = LoadResource( NULL, hRes );
	if( !hGlob )
		return FALSE;

	LPVOID pData = LockResource( hGlob );
	if( !pData || dwSize == 0 )
		return FALSE;

	HGLOBAL hMem = GlobalAlloc( GMEM_MOVEABLE, dwSize );
	if( !hMem )
		return FALSE;

	void* pMem = GlobalLock( hMem );
	if( pMem )
	{
		memcpy( pMem, pData, dwSize );
		GlobalUnlock( hMem );
	}

	IStream* pStream = NULL;
	if( FAILED( CreateStreamOnHGlobal( hMem, TRUE, &pStream ) ) )
	{
		GlobalFree( hMem );
		return FALSE;
	}

	CImage xImage;
	HRESULT hr = xImage.Load( pStream );
	pStream->Release();

	if( FAILED( hr ) )
		return FALSE;

	HBITMAP hBmp = xImage.Detach();
	if( hBmp == NULL )
		return FALSE;

	// set window size
	BITMAP bmp = { 0 };
	GetObject( hBmp, sizeof(BITMAP), &bmp );
	m_dwWidth	= bmp.bmWidth;		// bitmap width
	m_dwHeight	= bmp.bmHeight;		// bitmap height
	// alpha color 
	HRGN hRgn = CreateRgnFromFile( hBmp, RGB( 255, 0, 255 ) );
	// build memory dc for background
	CDC* dc = GetDC();
	m_dcBkGrnd = CreateCompatibleDC( dc->m_hDC );
	ReleaseDC( dc );
	
	// select background image
	SelectObject( m_dcBkGrnd, hBmp );
	
	// Set window size the same as background image size
	//::SetWindowPos( this->GetSafeHwnd(), HWND_TOPMOST, 0, 0, m_dwWidth, m_dwHeight, SWP_NOZORDER | SWP_NOMOVE );
	SetWindowPos( &wndTopMost, 0, 0, m_dwWidth, m_dwHeight, SWP_NOZORDER | SWP_NOMOVE | SWP_NOACTIVATE );
	::SetForegroundWindow( this->GetSafeHwnd() );
	::SetActiveWindow( this->GetSafeHwnd() );

	// assign region to window
	SetWindowRgn( hRgn, FALSE );

	return TRUE;
}

void CDnLauncherDlg::InitControl()
{
	// Button Control
	m_BtnCheckDirectGameStart.MoveWindow( m_pRectCtrl[em_CheckBox_DIrectStart] );
	m_BtnCheckDirectGameStart.SetCheck( DNOPTIONDATA.m_bAutoGameStart );

	m_BtnCancel.SetSkinJpg( IDR_JPG_CANCEL + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_CANCEL_CLICK + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_CANCEL_ON + DNPATCHINFO.GetLanguageOffset() );
	m_BtnCancel.MoveWindow( m_pRectCtrl[em_BtnQuit] );
	m_BtnCancel.SetWindowText( L"" );

	m_BtnStartGame.SetSkinJpg( IDR_JPG_GAMESTART + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_GAMESTART_CLICK + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_GAMESTART_ON + DNPATCHINFO.GetLanguageOffset() );
	m_BtnStartGame.MoveWindow( m_pRectCtrl[em_BtnStartGame] );
	m_BtnStartGame.ShowWindow( SW_HIDE );
	m_BtnStartGame.SetWindowText( L"" );

	m_BtnGameOption.SetSkinJpg( IDR_JPG_OPTION + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_OPTION_CLICK + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_OPTION_ON + DNPATCHINFO.GetLanguageOffset() );
	m_BtnGameOption.MoveWindow( m_pRectCtrl[em_BtnOption] );
	m_BtnGameOption.ShowWindow( SW_HIDE );
	m_BtnGameOption.SetWindowText( L"" );

	m_BtnClose.SetSkinJpg( IDR_JPG_CLOSE + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_CLOSE_CLICK + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_CLOSE_ON + DNPATCHINFO.GetLanguageOffset() );
	m_BtnClose.MoveWindow( m_pRectCtrl[em_BtnWinClose] );
	m_BtnClose.SetWindowText( L"" );

	m_BtnMinimum.SetSkinJpg( IDR_JPG_MINIMUM + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_MINIMUM_CLICK + DNPATCHINFO.GetLanguageOffset(), IDR_JPG_MINIMUM_ON + DNPATCHINFO.GetLanguageOffset() );
	m_BtnMinimum.MoveWindow( m_pRectCtrl[em_BtnWinMiniMum] );
	m_BtnMinimum.SetWindowText( L"" );

// ProgressBar Control
	m_pDownloadProgressBitmap = new CBitmap();
	HBITMAP hDownloadBitmap = (HBITMAP)::LoadImage( ::AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_PROGRESS_DOWNLOAD), IMAGE_BITMAP, 0, 0, LR_LOADMAP3DCOLORS );
	m_pDownloadProgressBitmap->Attach( hDownloadBitmap );
	m_pDownloadProgress = new CSkinProgress( &m_StaticDownloadProgress, 100, m_pDownloadProgressBitmap );
	m_pDownloadProgress->SetRange( 0, 100 );
	m_StaticDownloadProgress.MoveWindow( m_pRectCtrl[em_DownloadProgress] );
	m_StaticDownloadProgress.SetWindowText( L"" );

	m_pFileCountProgressBitmap = new CBitmap();
	HBITMAP hCountBitmap = (HBITMAP)::LoadImage( ::AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_PROGRESS_COUNT), IMAGE_BITMAP, 0, 0, LR_LOADMAP3DCOLORS );
	m_pFileCountProgressBitmap->Attach( hCountBitmap );
	m_pFileCountProgress = new CSkinProgress( &m_StaticFileCountProgress, 100, m_pFileCountProgressBitmap );
	m_pFileCountProgress->SetRange( 0, 100 );
	m_StaticFileCountProgress.MoveWindow( m_pRectCtrl[em_FileCountProgress] );
	m_StaticFileCountProgress.SetWindowText( L"" );

	// Text Control
	MakeFont();
	SetStaticText();
}

void CDnLauncherDlg::SetStaticText()
{
	m_StaticLauncherVersion.SetTextColor( m_staticBaseColor );
	m_StaticLauncherVersion.SetFont( &m_Font );
	m_StaticLauncherVersion.MoveWindow( m_pRectCtrl[em_Text_LauncherVersion] );

	m_StaticFileName.SetTextColor( m_staticBaseColor );
	m_StaticFileName.SetFont( &m_Font );
	m_StaticFileName.MoveWindow( m_pRectCtrl[em_Text_FileName] );

	m_StaticFileSize.SetTextColor( m_staticBaseColor );
	m_StaticFileSize.SetFont( &m_Font );
	m_StaticFileSize.MoveWindow( m_pRectCtrl[em_Text_FileSize] );

	m_StaticTimeLeft.SetTextColor( m_staticBaseColor );
	m_StaticTimeLeft.SetFont( &m_Font );
	m_StaticTimeLeft.MoveWindow( m_pRectCtrl[em_Text_TimeLeft] );

	m_StaticFileCount.SetTextColor( m_staticBaseColor );
	m_StaticFileCount.SetFont( &m_Font );
	m_StaticFileCount.MoveWindow( m_pRectCtrl[em_Text_FileCount] );

	m_StaticDownloadPercentage.SetTextColor( m_staticBaseColor );
	m_StaticDownloadPercentage.SetFont( &m_Font );
	m_StaticDownloadPercentage.MoveWindow( m_pRectCtrl[em_Text_DownloadPercentage] );

	m_StaticDownloadState.SetTextColor( m_staticBaseColor );
	m_StaticDownloadState.SetFont( &m_Font );
	m_StaticDownloadState.MoveWindow( m_pRectCtrl[em_Text_DownloadState] );

	m_StaticDirectGameStart.SetTextColor( m_staticBaseColor );
	m_StaticDirectGameStart.SetFont( &m_Font );
	m_StaticDirectGameStart.MoveWindow( m_pRectCtrl[em_Text_DirectStart] );
	m_StaticDirectGameStart.SetWindowText( _S( STR_AFTER_UPDATE_ATUOSTART + DNPATCHINFO.GetLanguageOffset() ) );

}

void CDnLauncherDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage( WM_ICONERASEBKGND, reinterpret_cast<WPARAM>( dc.GetSafeHdc() ), 0 );

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics( SM_CXICON );
		int cyIcon = GetSystemMetrics( SM_CYICON );
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon( x, y, m_hIcon );
	}
	else
	{
		CDialog::OnPaint();
	}
}

HBRUSH CDnLauncherDlg::OnCtlColor( CDC* pDC, CWnd* pWnd, UINT nCtlColor )
{
	HBRUSH hbr = CDialog::OnCtlColor( pDC, pWnd, nCtlColor );
	RECT rect;

	switch(nCtlColor)
	{
	case CTLCOLOR_STATIC:
//	case CTLCOLOR_EDIT:
//	case CTLCOLOR_LISTBOX:
//	case CTLCOLOR_SCROLLBAR:
		{
			pDC->SetBkMode(TRANSPARENT);
			pWnd->GetWindowRect(&rect);
			RedrawWindow(&rect);
			return (HBRUSH)GetStockObject(NULL_BRUSH);;
		}
		break;
	}

	return hbr;
}

BOOL CDnLauncherDlg::OnEraseBkgnd( CDC* pDC )
{
	BitBlt( pDC->m_hDC, 0, 0, m_dwWidth, m_dwHeight, m_dcBkGrnd, 0, 0, SRCCOPY );
	return FALSE;
}

HCURSOR CDnLauncherDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CDnLauncherDlg::OnLButtonDown( UINT nFlags, CPoint point )
{
	if( !(m_dwFlags & DRAGGING) )
	{
		m_pntMouse = point;
		m_dwFlags |= DRAGGING;
		SetCapture();
	}

	CDialog::OnLButtonDown( nFlags, point );
}

void CDnLauncherDlg::OnLButtonUp( UINT nFlags, CPoint point )
{
	if( m_dwFlags & DRAGGING )
	{
		m_dwFlags &= ~DRAGGING;
		ReleaseCapture();
	}

	CDialog::OnLButtonUp( nFlags, point );
}

void CDnLauncherDlg::OnMouseMove( UINT nFlags, CPoint point )
{
	if ( m_dwFlags & DRAGGING )
	{
		RECT rect;
		GetWindowRect( &rect );

		rect.left += point.x - m_pntMouse.x;
		rect.top += point.y - m_pntMouse.y;

		SetWindowPos( &wndTopMost, rect.left, rect.top, 0, 0, SWP_NOZORDER | SWP_NOSIZE );
		SendMessage( WM_PAINT );
	}

	CDialog::OnMouseMove( nFlags, point );
}

void CDnLauncherDlg::OnClickedCheckDirectGamestart()
{
	if( m_BtnCheckDirectGameStart.GetCheck() != DNOPTIONDATA.m_bAutoGameStart )
	{
		DNOPTIONDATA.m_bAutoGameStart = m_BtnCheckDirectGameStart.GetCheck();
		DNOPTIONDATA.SaveConfigOption( this->m_hWnd );
	}
}

void CDnLauncherDlg::OnClickButtonCancel()
{
	int nResult = AfxMessageBox( _S( STR_PATCH_CANCEL + DNPATCHINFO.GetLanguageOffset() ), MB_YESNO );
	if ( nResult == IDYES && m_emDownloadPatchState != PATCH_COMPLETE )	// User confirmed cancellation while patch is downloading
	{
		if( g_pPatchDownloadThread )
		{
			g_pPatchDownloadThread->TerminateThread();
			g_pPatchDownloadThread->WaitForTerminate();

			SAFE_DELETE( g_pPatchDownloadThread );
			g_pPatchDownloadThread = NULL;
		}
		LogWnd::TraceLog(_T("Patch Canceled"));

}
}

void CDnLauncherDlg::EnableStartButton()
{
	m_BtnCancel.ShowWindow( SW_HIDE );
	m_BtnStartGame.ShowWindow( SW_SHOW );
	m_BtnGameOption.ShowWindow( SW_SHOW );
}

void CDnLauncherDlg::OnClickButtonGameStart()
{
	// System Memory Check
	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);

	if( !GlobalMemoryStatusEx( &statex ) )
	{
		LogWnd::Log( LogLevel::Warning, L"Failed to get system memory status. Check your PC. : %08X", GetLastError() );
	}
	if( statex.ullAvailPhys < 800000000ULL )
	{
		AfxMessageBox( _S( STR_WARNNING_AVAILABLE_MEMORY + DNPATCHINFO.GetLanguageOffset() ), MB_OK );
		LogWnd::Log( LogLevel::Warning, L"Warnning! Check Available Memory." );
	}

	CString strExeFile = DNPATCHINFO.GetClientPath();
	if( m_bUseX64 )
		strExeFile += _T(DNCLIENT_NAME_X64);
	else
		strExeFile += _T(DNCLIENT_NAME);

	DNOPTIONDATA.SaveConfigOption( this->m_hWnd );
#ifdef _USE_MULTILANGUAGE
	DNPATCHINFO.AddLanguageParamToTotalParam();
#endif // _USE_MULTILANGUAGE

	CString strParam = DNPATCHINFO.GetTotalParameter();

	if( m_bUseDX11 )
	{
		CString strDX11Param = strParam + _T(" /bgfx");
		ShellExecute( m_hWnd, NULL, strExeFile.GetString(), strDX11Param.GetString(), NULL, SW_SHOWNORMAL );
		LogWnd::Log( LogLevel::Info, L"DX11 Param: %s", strDX11Param.GetString() );
	}
	else
	{
		ShellExecute( m_hWnd, NULL, strExeFile.GetString(), strParam.GetString(), NULL, SW_SHOWNORMAL );
		LogWnd::Log( LogLevel::Info, L"DX9 Param: %s", strParam.GetString() );
	}

#ifdef _USE_AUTOUPDATE
	int nNextVersion = DNPATCHINFO.GetNextVersion();
	LogWnd::Log( LogLevel::Info, L"Check Next Version Ver:%d, Server Ver:%d", nNextVersion, DNPATCHINFO.GetServerVersion() );
	if( nNextVersion > 0 && nNextVersion > DNPATCHINFO.GetServerVersion() )
	{
		CString strAutoupdateParameter;
		strAutoupdateParameter.Format( L"%s|%s|%d-%d", DNPATCHINFO.GetPatchUrl(), DNPATCHINFO.GetClientPath(), DNPATCHINFO.GetServerVersion()+1, nNextVersion );

		CString strAutoUpdateExe = DNPATCHINFO.GetClientPath();
		strAutoUpdateExe += DNAUTOUPDATE_NAME;

		LogWnd::Log( LogLevel::Info, L"Execute AutoUpdate.exe %s", strAutoUpdateExe.GetString() );
		ShellExecute( m_hWnd, NULL, strAutoUpdateExe.GetString(), strAutoupdateParameter.GetString(), NULL, SW_SHOWNORMAL );
	}
#endif // _USE_AUTOUPDATE
	Sleep( 1000 );

	CDialog::OnOK();
}

void CDnLauncherDlg::OnClickButtonOption()
{
	CDnOptionDlg dlg( this );
	INT_PTR nResponse = dlg.DoModal();
}

void CDnLauncherDlg::OnClickButtonClose()
{
	int nResult = AfxMessageBox( _S( STR_LAUNCHER_EXIT + DNPATCHINFO.GetLanguageOffset() ), MB_YESNO );
	if( nResult == IDYES )
	{
		LogWnd::TraceLog(_T("Launcher Closed"));
		CDialog::OnCancel();
	}
}

void CDnLauncherDlg::OnClickMinimumBtn()
{
	ShowWindow( SW_SHOWMINIMIZED );
}

void CDnLauncherDlg::OnTimer( UINT_PTR nIDEvent )
{
	if( nIDEvent == TEVENT_REFRESH_TEXTINFO )	// Refresh text information timer event
		RefreshTextInfo();

	CDialog::OnTimer(nIDEvent);
}

void CDnLauncherDlg::StartPatchDownloadThread()
{
	if( g_pPatchDownloadThread == NULL )
	{
		g_pPatchDownloadThread = new CDnPatchDownloadThread();
		g_pPatchDownloadThread->SetWindowHandle( GetSafeHwnd() );
		g_pPatchDownloadThread->Start();
	}
}

void CDnLauncherDlg::CtlEraseBkgnd( int nCtlID )
{
	RECT rect;
	GetDlgItem( nCtlID )->GetWindowRect( &rect );
	this->ScreenToClient( &rect );
	InvalidateRect( &rect );
}

void CDnLauncherDlg::RefreshTextInfo()
{
UpdateDownloadInfo();

	CString str; 
	GetDlgItem( IDC_LAUNCHER_VERSION )->GetWindowText( str );
	if( str != m_strLauncherVersion ) CtlEraseBkgnd( IDC_LAUNCHER_VERSION );

	GetDlgItem( IDC_FILE_NAME )->GetWindowText( str );
	if( str != m_strFileName ) CtlEraseBkgnd( IDC_FILE_NAME );

	GetDlgItem( IDC_FILE_SIZE )->GetWindowText( str );
	if( str != m_strFileSize ) 	CtlEraseBkgnd( IDC_FILE_SIZE );

	GetDlgItem( IDC_TIME_LEFT )->GetWindowText( str );
	if( str != m_strTimeLeft ) CtlEraseBkgnd( IDC_TIME_LEFT );
	
	GetDlgItem( IDC_FILE_COUNT )->GetWindowText( str );
	if( str != m_strFileCount ) CtlEraseBkgnd( IDC_FILE_COUNT );

	GetDlgItem( IDC_DOWNLOAD_PERCENTAGE )->GetWindowText( str );
	if( str != m_strDownloadPercentage ) CtlEraseBkgnd( IDC_DOWNLOAD_PERCENTAGE );

	GetDlgItem( IDC_DOWNLOAD_STATE )->GetWindowText( str );
	if( str != m_strDownloadState ) CtlEraseBkgnd( IDC_DOWNLOAD_STATE );

	GetDlgItem( IDC_DIRECT_START)->GetWindowText( str );
	if( str != m_strDirectGameStart) CtlEraseBkgnd( IDC_DIRECT_START);

UpdateData( FALSE );
}

LRESULT CDnLauncherDlg::OnStatusMsg( WPARAM wParam, LPARAM lParam )
{
	m_emDownloadPatchState = static_cast<DownloadPatchState>(wParam);

	if( g_DownloadStateString[m_emDownloadPatchState].nStringID + DNPATCHINFO.GetLanguageOffset() != -1 )
	{
		m_strDownloadState = _S( g_DownloadStateString[m_emDownloadPatchState].nStringID + DNPATCHINFO.GetLanguageOffset() );
	}
	UpdateDownloadInfo();

	switch( m_emDownloadPatchState )
	{
	case PATCH_NONE:
		ResetDownloadInfo();
		m_bDownloading = FALSE;
		break;
	case PATCH_CHECK_VERSION:
		m_bDownloading = TRUE;
		break;
	case PATCH_COMPLETE:
		{
			EnableStartButton();
			SAFE_DELETE( g_pPatchDownloadThread );

			m_pDownloadProgress->SetRange( 0, 100 );
			m_pDownloadProgress->SetPos( 100 );
			m_pFileCountProgress->SetRange( 0, 100 );
			m_pFileCountProgress->SetPos( 100 );
			m_strDownloadPercentage.Format( _T("%d%%"), 100 );

			if( DNOPTIONDATA.m_bAutoGameStart )	// Auto-launch game if enabled
				OnClickButtonGameStart();

			m_bDownloading = FALSE;
		}
		break;
	case PATCH_FAILED:
	case PATCH_TERMINATE:
		{
			SAFE_DELETE( g_pPatchDownloadThread );
			m_bDownloading = FALSE;
		}
		break;
	case PATCH_LAUNCHER:
		{
			CDialog::DestroyWindow();
			m_bDownloading = FALSE;
		}
		break;
	}

	return 0;
}

void CDnLauncherDlg::ResetDownloadInfo()
{
	m_strFileName.Empty();
	m_strFileSize.Empty();
	m_strTimeLeft.Empty();
	m_strFileCount.Empty();
	m_strDownloadPercentage.Empty();
	m_strDownloadState.Empty();

	if( m_pDownloadProgress )
	{
		m_pDownloadProgress->SetRange( 0, 100 );
		m_pDownloadProgress->SetPos( 0 );
	}
	if( m_pFileCountProgress )
	{
		m_pFileCountProgress->SetRange( 0, 100 );
		m_pFileCountProgress->SetPos( 0 );
	}
}

void CDnLauncherDlg::UpdateDownloadInfo()
{
	// Download info: file count, size, download state
	if( m_emDownloadPatchState == PATCH_DOWNLOAD_DATA || m_emDownloadPatchState == PATCH_MD5_CHECK
		|| m_emDownloadPatchState == PATCH_APPLY_PAK_FILE )
	{
		if( g_DownloadInfoData.m_strFileName.GetLength() > 0 )
			m_strFileName = g_DownloadInfoData.m_strFileName;
		if( g_DownloadInfoData.m_nFileSize > 0 )
			m_strFileSize = GetAdjustFileSize( (double)g_DownloadInfoData.m_nFileSize );
		m_fDownloadRate = g_DownloadInfoData.m_fDownloadRate;
		UpdateDownloadLeftTime();

		// Download info: estimated time remaining
		m_nDownloadProgressMin = g_DownloadInfoData.m_nDownloadProgressMin;
		m_nDownloadProgressMax = g_DownloadInfoData.m_nDownloadProgressMax;
		m_nCurrentFileCount = g_DownloadInfoData.m_nCurrentFileCount;
		m_nTotalFileCount = g_DownloadInfoData.m_nTotalFileCount;
		UpdatProgressInfo();
	}

	if( g_DownloadStateString[m_emDownloadPatchState].nStringID != -1 )
	{
		if( m_nCurrentFileCount > 0 && m_nTotalFileCount > 0 )
		{
			CString strCount;
			strCount.Format( _T("(%d/%d)"), m_nCurrentFileCount, m_nTotalFileCount );
			m_strDownloadState.Format( _T("%s %s"), _S( g_DownloadStateString[m_emDownloadPatchState].nStringID + DNPATCHINFO.GetLanguageOffset() ), strCount );
		}
		else
		{
			m_strDownloadState = _S( g_DownloadStateString[m_emDownloadPatchState].nStringID + DNPATCHINFO.GetLanguageOffset() );
		}
	}

	// Format file size string
	if( m_emDownloadPatchState == PATCH_APPLY_PAK_FILE_END )
		m_strLauncherVersion.Format( _T("Ver.%d"), DNPATCHINFO.GetClientVersion() );
}

void CDnLauncherDlg::UpdatProgressInfo()
{
	if( m_pDownloadProgress == NULL || m_pFileCountProgress == NULL )
		return;

	if( m_nDownloadProgressMax == 0 || m_nTotalFileCount == 0 )		// error divide by zero
		return;

	// Update progress bar and percentage
	m_pFileCountProgress->SetRange( 0, 100 );
	int nDownloadPercentage = 0;
	if( m_emDownloadPatchState == PATCH_DOWNLOAD_DATA || PATCH_APPLY_PAK_FILE )
		nDownloadPercentage = static_cast<int>( (100 * m_nDownloadProgressMin) / m_nDownloadProgressMax );
	else if( m_emDownloadPatchState == PATCH_MD5_CHECK )
		nDownloadPercentage = 100;

	if( nDownloadPercentage < 0 ) nDownloadPercentage = 0;
	if( nDownloadPercentage > 100 ) nDownloadPercentage = 100;

	m_strDownloadPercentage.Format( _T("%d%%"), nDownloadPercentage );
	m_pDownloadProgress->SetPos( nDownloadPercentage );

	// Scale file count progress range by 100 for smooth interpolation
	m_pFileCountProgress->SetRange( 0, m_nTotalFileCount * 100 );	// Total file count scaled by 100
	int nCurrentFileCountPercentage = 0;

	if( m_emDownloadPatchState == PATCH_DOWNLOAD_DATA || m_emDownloadPatchState == PATCH_MD5_CHECK )
		nCurrentFileCountPercentage = ((m_nCurrentFileCount - 1) * 100) + (nDownloadPercentage / 2);
	else if( m_emDownloadPatchState == PATCH_APPLY_PAK_FILE )
		nCurrentFileCountPercentage = ((m_nCurrentFileCount - 1) * 100) + (nDownloadPercentage / 2) + 50;

	if( nCurrentFileCountPercentage < 0 ) nCurrentFileCountPercentage = 0;
	if( nCurrentFileCountPercentage > m_nTotalFileCount * 100 ) nCurrentFileCountPercentage = m_nTotalFileCount * 100;

	m_pFileCountProgress->SetPos( nCurrentFileCountPercentage );
	m_strFileCount.Format( _T("%d/%d"), m_nCurrentFileCount, m_nTotalFileCount );

	nDownloadPercentage = static_cast<int>( (100 * nCurrentFileCountPercentage) / ( m_nTotalFileCount * 100 ) );
	if( nDownloadPercentage < 0 ) nDownloadPercentage = 0;
	if( nDownloadPercentage > 100 ) nDownloadPercentage = 100;
	m_strDownloadPercentage.Format( _T("%d%%"), nDownloadPercentage );
	m_strFileCount = L"";
}

CString CDnLauncherDlg::GetAdjustFileSize( double size )
{
	CString str;

	if( size >= 1024 * 1024 )
		str.Format( _T("%.1f MB") , size / (1024.0f * 1024.0f) );
	else if( size >= 1024 )
		str.Format( _T("%.1f KB") , size / 1024.0f );
	else
		str.Format( _T("%d B") , size );

	return str;
}

void CDnLauncherDlg::UpdateDownloadLeftTime()
{
	if( m_fDownloadRate > 0 )
	{
		// Download speed calculation
		int nEstimateTimeLeft = static_cast<int>( static_cast<float>( m_nDownloadProgressMax - m_nDownloadProgressMin ) / m_fDownloadRate / 1000.0f );

		if( nEstimateTimeLeft > 3600 )
		{
			int nHour = nEstimateTimeLeft / 3600;
			int nMin = (nEstimateTimeLeft - (nHour * 3600)) / 60;
			int nSec = nEstimateTimeLeft - (nHour * 3600) - (nMin * 60);
			m_strTimeLeft.Format( _S( STR_DLG_TIME_HOUR_MIN_SEC + DNPATCHINFO.GetLanguageOffset() ), nHour, nMin, nSec );
		}
		else if( nEstimateTimeLeft <= 3600 && nEstimateTimeLeft > 60 )
		{
			int nMin = nEstimateTimeLeft / 60;
			int nSec = nEstimateTimeLeft - (nMin * 60);
			m_strTimeLeft.Format( _S( STR_DLG_TIME_MIN_SEC + DNPATCHINFO.GetLanguageOffset() ), nMin, nSec );
		}
		else if( nEstimateTimeLeft <= 60 && nEstimateTimeLeft >= 0)
			m_strTimeLeft.Format( _S( STR_DLG_TIME_SEC + DNPATCHINFO.GetLanguageOffset() ), nEstimateTimeLeft );
	}
}

BOOL CDnLauncherDlg::PreTranslateMessage(MSG* pMsg)
{
	// PreTranslateMessage handler

	if( pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN )
	{
		if(m_BtnStartGame && m_BtnStartGame.IsWindowVisible())
		{
			OnClickButtonGameStart();
			return true;
		}
		return true;
	}

	if( pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE )
	{
		if(m_BtnClose && m_BtnClose.IsWindowVisible())
		{
			OnClickButtonClose();
			return true;
		}
		return true;
	}

	return CDialog::PreTranslateMessage(pMsg);
}

void CDnLauncherDlg::MakeFont()
{
	m_Font.CreateFont( 14, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE, 0, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH, _T("Lucida Sans Unicode") );
}

void CDnLauncherDlg::InitCtrlRect()
{
	::InitCtrlRect();
}

void CDnLauncherDlg::OnClickBtnDX9()
{
	m_bUseDX11 = FALSE;
	DNOPTIONDATA.m_bUseDX11 = FALSE;
	m_BtnDX9.SetCheck( BST_CHECKED );
	m_BtnDX11.SetCheck( BST_UNCHECKED );
	DNOPTIONDATA.SaveConfigOption( this->m_hWnd );
}

void CDnLauncherDlg::OnClickBtnDX11()
{
	m_bUseDX11 = TRUE;
	DNOPTIONDATA.m_bUseDX11 = TRUE;
	m_BtnDX9.SetCheck( BST_UNCHECKED );
	m_BtnDX11.SetCheck( BST_CHECKED );
	DNOPTIONDATA.SaveConfigOption( this->m_hWnd );
}

void CDnLauncherDlg::OnClickHomepageLink()
{
	CString strUrl = DNPATCHINFO.GetGuidepageUrl();
	if( strUrl.IsEmpty() )
		strUrl = DNPATCHINFO.GetHomepageUrl();
	if( !strUrl.IsEmpty() )
		ShellExecute( NULL, _T("open"), strUrl, NULL, NULL, SW_SHOWNORMAL );
}

void CDnLauncherDlg::OnClickBtnENG()
{
	DNPATCHINFO.SetLanguageParam( _T("ENG") );
	DNPATCHINFO.SetLocaleGuidePage();
	NavigateHtml();
	SetStaticText();
	RefreshTextInfo();
}

void CDnLauncherDlg::OnClickBtnVNM()
{
	DNPATCHINFO.SetLanguageParam( _T("VNM") );
	DNPATCHINFO.SetLocaleGuidePage();
	NavigateHtml();
	SetStaticText();
	RefreshTextInfo();
}
