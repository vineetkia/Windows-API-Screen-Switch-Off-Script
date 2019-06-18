#include <Windows.h>
int main()
{
	SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER, (LPARAM)2);
	Sleep(5000); \\ Sleep For 5 Seconds OR Tap Button To WakeUP
	SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER, (LPARAM)-1);
	return 0;
}
