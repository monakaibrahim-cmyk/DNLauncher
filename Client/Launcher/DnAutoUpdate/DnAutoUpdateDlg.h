// DnAutoUpdateDlg.h : header file
//

#pragma once

#define WM_NOTIFYICON_MSG	WM_USER+1
#define WM_NOTIFYICON_HIDE	WM_USER+2

// CDnAutoUpdateDlg dialog
class CDnAutoUpdateDlg : public CDialog
{
// Construction
public:
	CDnAutoUpdateDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_DNAUTOUPDATE_DIALOG };
	BOOL			m_bShowWindow;
	BOOL			m_bShowTrayTooltip;
	CMenu			m_TrayMenu;
	NOTIFYICONDATA	m_stNID;

	CWinThread*		m_pThread;
	CProgressCtrl	m_progressCtrl;
	BOOL			m_bDownloadEnd;
	DWORD			m_dwExitTick;

public:
	BOOL ShowWindowEx( int nCmdShow );
	void SetDownloadInfo( float fRate, float fPercent );
	void DownloadComplete( int nRtn );

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnClose();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExit();
	afx_msg LRESULT OnTrayNotifyMsg( WPARAM wParam,LPARAM lParam );
	afx_msg void OnWindowPosChanging( WINDOWPOS FAR* lpwndpos );
	afx_msg void OnSysCommand( UINT nID, LPARAM lParam );
	afx_msg void OnDestroy();
	afx_msg void OnTimer( UINT_PTR nIDEvent );

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPause();
	afx_msg void OnBnClickedButtonResume();
	afx_msg void OnBnClickedButtonExit();
};
