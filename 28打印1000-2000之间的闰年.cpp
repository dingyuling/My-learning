/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int RUN = 0;//����

	int g = 0;//����

	printf("�����У�\n");

	for (RUN = 1000; RUN <= 2000; RUN++)
	{
		if (RUN % 4 == 0 && RUN % 100 != 0 || RUN % 400 == 0)
			//�����������:һ:�ܱ�4�����������ܱ�100���������(����2008�����꣬1900��������)
						//��:�ܱ�400���������(����2000��)Ҳ������
		{
			printf("%d��\t", RUN);
			g++;
		}
	}
	printf("\n");
	printf("������%d��\n", g);

	return 0;
}*/