
// MFCApplication3Dlg.h : 头文件
//

#pragma once


// CMFCApplication3Dlg 对话框
class CMFCApplication3Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication3Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

public:
	CPen m_pen[5];
	CPoint m_point[5];
public:
	void DrawLine(CDC *pDC);
	void DDA(int x1, int y1, int x2, int y2,CDC*pDC);
	void DDA_Bresenham(int x1, int y1, int x2, int y2, CDC *pDC);
// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
