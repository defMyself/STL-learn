CILHook::CILHook()
{
	// ��ʼ��
	mp_pfnOrig = NULL;
	ZeroMemory(m_bOldBytes, 5);
	ZeroMemory(m_bNewBytes, 5);
}

CILHook::~CILHook() {
	// ȡ��Hook
	UnHook();
	
	mp_pfnOrig = NULL;
	ZeroMemory(m_bOldBytes, 5);
	ZeroMemory(m_bNewBytes, 5);
}


