/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>

int main()

{
	int i = 0;//����
	char ch[10] = { 0 };//����
	

	for (i = 0; i < 5; i++)//ѭ��5��
	{
		printf("��������Ĵ��룺\n");
		scanf("%s", ch);//ȡ�ַ���ch

		if (strcmp(ch, "258369") == 0)//strcmp�ȽϺ���
		{
			printf("�ɹ������ڽ���...\n");
			break;//��ȷ������ѭ��
		}
		else
		{
			printf("ʧ�ܣ����������롣\n");//ʧ�ܼ���ѭ����ֱ��ѭ������
		}
	}
	if (i == 5)//ʧ�����
	{
		printf("���󳬹���Σ����ᣬ��5min�����³��ԣ�");
		Sleep(300000);
	}
	return 0;
}*/