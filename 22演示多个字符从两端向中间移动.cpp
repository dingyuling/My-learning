/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>//��������strlen
#include<windows.h>//ʱ��Sleep

int main()
{
	char ch1[] = { "The world is not beautiful" };
	char ch2[] = { "**************************" };//�����ַ���

	int l = 0;//��ߵ�ַΪ1
	int z = sizeof(ch1) / sizeof(ch1[0]);
	//int i = strlen(ch1 - 1);//�����ж��ٸ��ַ�
	int r = z - 1;
	//int r = i - 1;//�ұߵ�ַ
	printf("%d\n", z);
	//printf("%d\n", i);//����

	while (l <= r)
	{
		ch2[l] = ch1[l];
		ch2[r] = ch1[r];//�����ַ������ַ��滻
		
		printf("  %s\n", ch2);//���ch2

		Sleep(1000);//��λ����
		system("cls");//�����Ļ

		l++;//��ַλ+1
		r--;//-1
	}
	
	printf("  %s\n", ch2);//����������Ȼ��Ļ�հ�

	return 0;
}*/