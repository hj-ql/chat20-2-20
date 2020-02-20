
// 4 volume  project   ChatServer1_2Dlg.h: 头文件
//

#pragma once


// CMy4volumeprojectChatServer12Dlg 对话框
class CMy4volumeprojectChatServer12Dlg : public CDialogEx
{
// 构造
public:
	CMy4volumeprojectChatServer12Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY4VOLUMEPROJECTCHATSERVER1_2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


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
