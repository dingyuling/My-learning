/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//����������rand��srand
#include<time.h>//����ʱ���time

void menu()//����˵�
{
	printf("              \n");
	printf(" 1,Play game! \n");
	printf("              \n");
	printf(" 2,Exit game! \n");
	printf("              \n");
}

void game()//��Ϸ����
{
	int g = 0;//����µ���

	int n = rand() % 100 + 1;//����һ����������µ�������n�����������ģ��100+1Ϊ1-100��ֵ

	while (1)//����ѭ���������ڲ�Ϊ0����һֱѭ��
	{
		printf("��²�����\n");
		scanf("%d", &g);//ȡ�û����ֵ

		if (g < n)//�µ�С�����ֵ
		{
			printf("��С��\n");
		}
		else if (g > n)//����
		{
			printf("�´���\n");
		}
		else//��������������
		{
			printf("��ϲ�㣬�¶���\n");
			break;//����ѭ��
		}
	}
}

int main()
{
	int i = 0;//�˵�ѡ��
	int j = 1;//����һ����Ϊ��Ľ���ֵ

	srand((unsigned int)time(NULL));//ǿ������ת��Ϊ���Σ�����ʼֵ0�������¼�����

	do
	{
		printf("��ӭ����������Ϸ����ѡ��\n");
		menu();//����ȫ�ֲ˵�
		scanf("%d", &i);//ѡ��

		switch (i)//switch��֧ѡ��
		{
		case 1:
			game();//��Ϸȫ������
			break;
		case 2:
			printf("�����˳���Ϸ\n");
			j = 0;//jΪ��
			break;
		default:
			printf("�����������������\n");//�������
			break;
		}
	} while (j);//ѭ��Ϊ�㣬��ֵ����ѭ��

	return 0;
}*/