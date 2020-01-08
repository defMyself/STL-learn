void CMsgTestDlg::OnClose()
{
	HWND hWnd = ::FindWindow("Notepad", NULL);
	if (hWnd == NULL)
	{
		AfxMessageBox("can't find Notpad");
		return ;	
	}
	
	::SendMessage(hWnd, WM_CLOSE, NULL, NULL);
}

void CMsgTestDlg::OnExec()
{
	WinExec("notepad.exe", SW_SHOW);
}

HWND FindWindow(
	LPCTSTR lpClassName,
	LPCTSTR lpWindowName
	);

LRESULT SendMessage(
	HWND hWnd,
	UINT Msg,
	WPARM wParam,
	LPARM lParam
);

