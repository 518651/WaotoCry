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
void nianty_add_box();