CILHook::CILHook()
{
	// 初始化
	mp_pfnOrig = NULL;
	ZeroMemory(m_bOldBytes, 5);
	ZeroMemory(m_bNewBytes, 5);
}

CILHook::~CILHook() {
	// 取消Hook
	UnHook();
	
	mp_pfnOrig = NULL;
	ZeroMemory(m_bOldBytes, 5);
	ZeroMemory(m_bNewBytes, 5);
}


