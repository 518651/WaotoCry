#pragma once
#include <direct.h>
#include <iostream>
#include <windows.h>
#include <io.h>
#include <winbase.h>
#include "stdlib.h" //获取软件路径头文件
#include <string>
#include <ostream>
#include <fstream>
#include <iomanip>
#pragma warning(disable : 4996)
//#pragma  comment(lib, "ws2_32.lib")
using namespace std;

void windows_text();
int windows_delete();
void guanbi();
int WINAPI_delete();
int shuixianhuashu();
int add(int num1, int num2);
int sushu();
string windows_username();

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
void nianty_add_box();