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
	void SetOnlySelectPartition( int nSelectChannelNum, int nSelectPartitionNum );		// 파티션 선택 Html에서 선택한 정보가 올 경우 처리
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
	virtual void InitControl();			// UI Control 초기화
	virtual void MakeFont();
	virtual void InitCtrlRect();			// 폰트 생성
	virtual void SetStaticText();		// 텍스트 설정
	virtual void RefreshTextInfo();		// 텍스트 정보 갱신
	virtual void EnableStartButton();	// 시작 버튼 활성화
	virtual void NavigateHtml();		// 웹페이지 이동
	virtual BOOL InitWebpage();			// 가이드 웹페이지 초기화
	virtual BOOL InitBackground();		// 배경 이미지 초기화
BOOL InitFail();					// 런처 초기화 실패
	BOOL InitInterface();				// UI 초기화

	void StartPatchDownloadThread();	// 패치 다운로드 쓰레드 시작
	void CtlEraseBkgnd( int nCtlID );

	// Update Download Info
	void ResetDownloadInfo();					// 다운로드 정보 초기화
	void UpdateDownloadInfo();					// 다운로드 정보 업데이트
	CString GetAdjustFileSize( double size );	// 파일 사이즈 스트링 만들기
	void UpdatProgressInfo();					// 프로그래스 정보 업데이트
	void UpdateDownloadLeftTime();				// 다운로드 남은 시간 업데이트
	CRect* GetControlPos( emDlgPosIndex index ) { return &m_pRectCtrl[index]; }

// Implementationz
public:
	// Dialog Data
	enum { IDD = IDD_DNLAUNCHER_DIALOG };
	enum { TEVENT_REFRESH_TEXTINFO = 0 };	// 타이머 이벤트
	std::vector<POINT> m_vecDisplayMode;
	BOOL	m_bUseX64;
	BOOL	m_bUseDX11;	// 로컬 해상도 정보 저장용

protected:
	// 인터페이스 관련 멤버 변수
	CRect*	m_pRectCtrl;
	int		m_nMaxCtrlNum;

	HICON	m_hIcon;
	DWORD	m_dwWidth;
	DWORD	m_dwHeight;
	HDC		m_dcBkGrnd;			// background bitmap dc
	DWORD	m_dwFlags;			// flags
	POINT	m_pntMouse;			// Mouse position for dragging
	CFont	m_Font;				// 폰트

	DownloadPatchState	m_emDownloadPatchState;	// 다운로드 상태
	
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
	CString		m_strLauncherVersion;		// 런처 버전
	CString		m_strFileName;				// 다운로드 받는 파일명
	CString		m_strFileSize;				// 다운로드 받는 파일 사이즈
	CString		m_strTimeLeft;				// 다운로드 남은 시간
	CString		m_strFileCount;				// 다운로드 받을 파일 갯 수
	CString		m_strDownloadPercentage;	// 다운로드 퍼센트
	CString		m_strDownloadState;			// 다운로드 상태
	CString		m_strDirectGameStart;		// 패치완료 후 바로 게임시작
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
CColorStatic	m_StaticszDirectStart;	// 패치 완료 후 게임 바로 실행 문구 Static
	COLORREF		m_staticBaseColor;		// 스태틱 기본 색상

	CDnHtmlView*	m_pDnHtmlView;			// 런처내 서비스 업체 웹페이지
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
