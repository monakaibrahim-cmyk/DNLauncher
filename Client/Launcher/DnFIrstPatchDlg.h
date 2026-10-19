#pragma once

#include "xSkinButton.h"
#include "SkinProgress.h"
#include "ColorStatic.h"

class CDnFIrstPatchDlg : public CDialog
{
	DECLARE_DYNAMIC(CDnFIrstPatchDlg)

public:
	CDnFIrstPatchDlg(CWnd* pParent = NULL);
	virtual ~CDnFIrstPatchDlg();

	enum { IDD = IDD_DIALOG_FIRSTPATCH };
	enum { IDD_DIALOG_FIRSTPATCH_TIMER = 1 };
	enum
	{
		em_FIRST_PATCH_TEXT = 0,
		em_FIRST_PATCH_PROGRESS_BAR ,
		
		em_FIRST_PATCH_MAX
	};

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	// ProgressBar
	CProgressCtrl*	m_pProgress; // Standard progress bar control.
	/*
	CSkinProgress*	m_pDownloadProgress;
	CBitmap*		m_pDownloadProgressBitmap;
	CStatic			m_StaticDownloadProgress;
	*/
	
	// Text
	CString			m_strFirstPatchTitle;
	CColorStatic	m_StaticFirstPatchText;
	COLORREF		m_staticBaseColor;
	CFont			m_Font;

	// Control rect positions.
	CRect*			m_pFirstRectControl;
	int				m_nRectControlMax;

	DWORD			m_dwWidth;
	DWORD			m_dwHeight;

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL	OnInitDialog();
	virtual BOOL	PreTranslateMessage(MSG* pMsg);
	afx_msg void	OnTimer(UINT_PTR nIDEvent);
	afx_msg void	OnDestroy();

	void			UpdateProgress();
	void			MakeFont();
	void			InitControl();
	HRESULT			ParsingControlPosition(CRect* pRect, int nMaxSize);
};
