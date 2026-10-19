//////////////////////////////////////////////////////////////////////////
// DnLauncherDlg.h : header file
//////////////////////////////////////////////////////////////////////////

#pragma once

#include "xSkinButton.h"
#include "SkinProgress.h"
#include "ColorStatic.h"
#include "DnPatchThread.h"

#define DRAGGING	0x01	// dragging flag

enum emDlgPosIndex 
{
	em_WebPageHtml = 0,
	em_BtnQuit,
	em_BtnStartGame,
	em_BtnOption, 
	em_BtnWinClose,
	em_BtnWinMiniMum,
	em_DownloadProgress,
	em_FileCountProgress,
	em_Text_LauncherVersion,
	em_Text_FileCount,
	em_Text_FileName,
	em_Text_TimeLeft,
	em_Text_FileSize,
	em_Text_DownloadPercentage,
	em_Text_DownloadState,
	em_Text_DirectStart,
	em_CheckBox_DIrectStart,
	em_MaxNum,
};


class CDnHtmlView;
class CDnLauncherDlg : public CDialog
{
// Construction
public:
	CDnLauncherDlg( CWnd* pParent = NULL );
	virtual ~CDnLauncherDlg() {}

public:
#ifdef _FIRST_PATCH
	void SetOnlySelectPartition( int nSelectChannelNum, int nSelectPartitionNum );		// Update partition selection and refresh HTML view
	void CheckVersionAndReboot();
	BOOL SaveModuleVersion( int nVersion );
#endif
	
	static CDnLauncherDlg* CreateLauncherDlg();

	// Generated message map functions
	afx_msg void OnDestroy();
	afx_msg LRESULT OnStatusMsg( WPARAM wParam, LPARAM lParam );
	afx_msg void OnTimer( UINT_PTR nIDEvent );
	afx_msg void OnLButtonDown( UINT nFlags, CPoint point );
	afx_msg void OnLButtonUp( UINT nFlags, CPoint point );
	afx_msg void OnMouseMove( UINT nFlags, CPoint point );
	afx_msg BOOL OnEraseBkgnd( CDC* pDC );
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor( CDC* pDC, CWnd* pWnd, UINT nCtlColor );
	afx_msg HCURSOR OnQueryDragIcon();
	// Button Ctrl Click
	afx_msg void OnClickedCheckDirectGamestart();
	afx_msg void OnClickButtonCancel();
	afx_msg void OnClickButtonGameStart();
	afx_msg void OnClickButtonOption();
	afx_msg void OnClickButtonClose();
	afx_msg void OnClickMinimumBtn();
	afx_msg void OnClickBtnDX9();
	afx_msg void OnClickBtnDX11();
	afx_msg void OnClickHomepageLink();
	afx_msg void OnClickBtnENG();
	afx_msg void OnClickBtnVNM();
	DECLARE_MESSAGE_MAP()

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual void InitControl();			// Initialize UI controls
	virtual void MakeFont();
	virtual void InitCtrlRect();		// Initialize control coordinates
	virtual void SetStaticText();		// Set static text
	virtual void RefreshTextInfo();		// Refresh text information
	virtual void EnableStartButton();	// Enable start button
	virtual void NavigateHtml();		// Navigate HTML web view
	virtual BOOL InitWebpage();			// Initialize web view control
	virtual BOOL InitBackground();		// Initialize background image
	BOOL InitFail();					// Handle initialization failure
	BOOL InitInterface();				// Initialize interface

	void StartPatchDownloadThread();	// Start patch download thread
	void CtlEraseBkgnd( int nCtlID );

	// Update Download Info
	void ResetDownloadInfo();					// Reset download information
	void UpdateDownloadInfo();					// Update download progress information
	CString GetAdjustFileSize( double size );	// Format file size into human-readable string
	void UpdatProgressInfo();					// Update progress bar
	void UpdateDownloadLeftTime();				// Calculate and update remaining download time
	CRect* GetControlPos( emDlgPosIndex index ) { return &m_pRectCtrl[index]; }

// Implementation
public:
	// Dialog Data
	enum { IDD = IDD_DNLAUNCHER_DIALOG };
	enum { TEVENT_REFRESH_TEXTINFO = 0 };	// Refresh text timer event ID
	std::vector<POINT> m_vecDisplayMode;
	BOOL	m_bUseX64;
	BOOL	m_bUseDX11;	// DirectX 11 / BGFX mode flag

protected:
	// Control rectangle pointers and count
	CRect*	m_pRectCtrl;
	int		m_nMaxCtrlNum;

	HICON	m_hIcon;
	DWORD	m_dwWidth;
	DWORD	m_dwHeight;
	HDC		m_dcBkGrnd;			// background bitmap dc
	DWORD	m_dwFlags;			// flags
	POINT	m_pntMouse;			// Mouse position for dragging
	CFont	m_Font;				// UI font

	DownloadPatchState	m_emDownloadPatchState;	// Download patch state
	
	// ProgressBar
	CSkinProgress*	m_pDownloadProgress;
	CSkinProgress*	m_pFileCountProgress;
	CBitmap*		m_pDownloadProgressBitmap;
	CBitmap*		m_pFileCountProgressBitmap;
	CStatic			m_StaticDownloadProgress;
	CStatic			m_StaticFileCountProgress;
	__int64			m_nDownloadProgressMin;
	__int64			m_nDownloadProgressMax;
	int				m_nCurrentFileCount;
	int				m_nTotalFileCount;
	float			m_fDownloadRate;
	BOOL			m_bDownloading;

	// Button
	CButton			m_BtnCheckDirectGameStart;
	CxSkinButton	m_BtnCancel;
	CxSkinButton	m_BtnStartGame;
	CxSkinButton	m_BtnGameOption;
	CxSkinButton	m_BtnClose;
	CxSkinButton	m_BtnMinimum;
	CxSkinButton	m_BtnDX9;
	CxSkinButton	m_BtnDX11;
	CxSkinButton	m_BtnENG;
	CxSkinButton	m_BtnVNM;

	// String
	CString		m_strLauncherVersion;		// Launcher version string
	CString		m_strFileName;				// Current downloading file name
	CString		m_strFileSize;				// Current downloading file size
	CString		m_strTimeLeft;				// Estimated remaining download time
	CString		m_strFileCount;				// Downloaded file count / total count
	CString		m_strDownloadPercentage;	// Download progress percentage
	CString		m_strDownloadState;			// Download state description
	CString		m_strDirectGameStart;		// Direct game start message
	
	// Static
	CColorStatic	m_StaticLauncherVersion;
	CColorStatic	m_StaticFileName;
	CColorStatic	m_StaticFileSize;
	CColorStatic	m_StaticTimeLeft;
	CColorStatic	m_StaticFileCount;
	CColorStatic	m_StaticDownloadPercentage;
	CColorStatic	m_StaticDownloadState;
	CColorStatic	m_StaticDirectGameStart;
	CColorStatic	m_StaticSelectLanguage;
	CColorStatic	m_StaticHomepageLink;
	CColorStatic	m_StaticszDirectStart;	// Direct game start static control
	COLORREF		m_staticBaseColor;		// Static text base color

	CDnHtmlView*	m_pDnHtmlView;			// Launcher HTML web browser view
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
