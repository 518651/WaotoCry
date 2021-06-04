#ifndef WMIC_H
#define WMIC_H

#include <Windows.h>
#include <comdef.h>
#include <Wbemidl.h>

//stl
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

#pragma comment(lib, "wbemuuid.lib")

//WMIC_ERROR start
class WMIC_ERROR : public std::exception
{
public:
    WMIC_ERROR(const char* message);
    WMIC_ERROR(const std::string message);
    virtual char const* what() const;
private:
    std::string m_message;
};
//WMIC_ERROR end

/*!
WMI�������
https://docs.microsoft.com/en-us/previous-versions//aa394084(v=vs.85)?redirectedfrom=MSDN
https://docs.microsoft.com/en-us/windows/win32/wmisdk/wmi-start-page
wmi ������
wbemtest.exe
SELECT * FROM [ClassName]
SELECT * FROM Win32_VideoController
*/

//�Կ� Win32_VideoController
struct WMIC_VideoController
{
    std::wstring name;
    std::wstring deviceID;
};

//Ӳ�� Win32_DiskDrive
struct WMIC_DiskDrive
{
    std::wstring name;
    std::wstring deviceID;
    std::wstring serialNumber;
    std::uint64_t size = 0;//GB
};

//���� Win32_BaseBoard
struct WMIC_BaseBoard
{
    std::wstring name;
    std::wstring manufacturer;//��������
    std::wstring product;//��Ʒ
    std::wstring version;//�汾
    std::wstring serialNumber;
};

//����BIOS Win32_BIOS
struct WMIC_BIOS
{
    std::wstring manufacturer;//��������
    std::wstring releaseDate;//��������
    std::wstring serialNumber;
};

//�ڴ� Win32_PhysicalMemory
struct WMIC_PhysicalMemory
{
    std::wstring name;
    std::wstring manufacturer;//��������
    std::wstring serialNumber;//���к�
    std::uint32_t speed;//Ƶ�� MHz(�׺�)
    std::uint64_t size;//���� GB
};

//CPU Win32_Processor
struct WMIC_Processor
{
    std::wstring name;
    std::wstring desc;//Description
    std::wstring manufacturer;//��������
    std::uint32_t numberOfCores;//CPU��������
    std::wstring processID;//������ID
    std::uint32_t threadCount;//�߳�����
    std::double_t maxClockSpeed;//���ʱ��Ƶ�� GHz
};

//���� Win32_SerialPort

//���� Win32_SoundDevice

//���������� Win32_NetworkAdapter
struct WMIC_NetworkAdapter
{
    std::wstring name;
    std::wstring desc;//Description
    std::wstring manufacturer;//��������
    std::wstring macAddress;
    std::wstring adapterType;
};

//ϵͳ��Ϣ Win32_OperatingSystem
struct WMIC_OperatingSystem
{
    std::wstring name;
    std::wstring buildNumber;
    std::wstring version;
    std::wstring installDate;
    std::wstring osArchitecture;
    std::wstring registeredUser;
    std::wstring serialNumber;
};

class WMIC
{
public:
    WMIC();
    ~WMIC();
    void sysinfo();
    WMIC_OperatingSystem OperatingSystem();//ϵͳ
    std::vector<WMIC_VideoController> VideoController();//�Կ�
    std::vector<WMIC_DiskDrive> DiskDrive();//Ӳ��
    WMIC_BaseBoard BaseBoard();//����
    WMIC_BIOS BIOS();
    std::vector<WMIC_PhysicalMemory> PhysicalMemory();//�ڴ���
    std::vector<WMIC_Processor> Processor();//cpu������
    std::vector<WMIC_NetworkAdapter> NetworkAdapter();//����������
private:
    IEnumWbemClassObject* ExecQuery(const std::wstring className);
private:
    HRESULT hResult;
    std::stringstream message;
    IWbemLocator* pLoc = NULL;
    IWbemServices* pSvc = NULL;
private:
    WMIC(const WMIC&) = delete;
    WMIC& operator = (const WMIC&) = delete;
};



#endif // WMIC_H
