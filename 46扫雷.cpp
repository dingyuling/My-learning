#define _CRT_SECURE_NO_WARNINGS 1


//9*9
#define L1 9
#define R1 9
#define LS1 L1+2
#define RS1 R1+2

//16*16
#define L2 16
#define R2 16
#define LS2 L2+2
#define RS2 R2+2

//30*16
#define L3 16
#define R3 30
#define LS3 L3+2
#define RS3 R3+2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//9*9

void NEW1(char games[LS1][RS1], int ls1, int rs1, char jk)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ls1; i++)
	{
		for (j = 0; j < rs1; j++)
		{
			games[i][j] = jk;
		}
	}
}

void PAN1(char games[LS1][RS1], int l1, int r1)
{
	int i = 0;
	int j = 0;
	printf("	");
	for (j = 0; j <= r1; j++)
	{
		if (j < 10)
		{
			printf("%d   ", j);
		}
		if (j >= 10)
		{
			printf("%d  ", j);
		}
	}
	printf("\n");
	for (i = 1; i <= l1; i++)
	{
		if (i < 10)
		{
			printf("	%d   ", i);
		}
		if (i >= 10)
		{
			printf("	%d  ", i);
		}
		for (j = 1; j <= r1; j++)
		{
			printf("%c   ", games[i][j]);
		}
		printf("\n");
	}
}

void lei1(char games[LS1][RS1], int l1, int r1)
{
	int shu = 10;
	while (shu)
	{
		int i = rand() % l1 + 1;
		int j = rand() % r1 + 1;
		if (games[i][j] == '0')
		{
			games[i][j] = '1';
			shu--;
		}
	}
}

int arr1(char games[LS1][RS1], int i, int j)
{
	return games[i - 1][j - 1] +
		games[i][j - 1] +
		games[i + 1][j - 1] +
		games[i + 1][j] +
		games[i + 1][j + 1] +
		games[i][j + 1] +
		games[i - 1][j + 1] +
		games[i - 1][j] - 8 * '0';
}

void pl1(char games1[LS1][RS1], char games2[LS1][RS1], int l1, int r1)
{
	int c = 0;
	int shu = 10;
	while (c < l1 * r1 - shu)
	{
		int i = 0;
		int j = 0;
		printf("	����������\n\t");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= l1 && j > 0 && j <= r1)
		{
			if (games1[i][j] == '1')
			{
				printf("		GAME OVER!!!\n		���ź����㱻ը����\n");
				Sleep(2000);
				printf("		��ϲ�㣬�������׳ɹ�!!!\n");
				Sleep(2000);
				PAN1(games1, L1, R1);
				break;
			}
			else
			{
				int tj = arr1(games1, i, j);
				games2[i][j] = tj + '0';
				PAN1(games2, L1, R1);
				c++;
				printf("\n");
			}
		}
		else
		{
			printf("		�����������������\n");
		}
	}
	if (c == l1 * r1 - shu)
	{
		printf("		Congratulations!!!\n		��ϲ�㣬���׳ɹ�!!!\n\n");
		PAN1(games1, L1, R1);
	}
}

//16*16

void NEW2(char games[LS2][RS2], int ls1, int rs1, char jk)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ls1; i++)
	{
		for (j = 0; j < rs1; j++)
		{
			games[i][j] = jk;
		}
	}
}

void PAN2(char games[LS2][RS2], int l1, int r1)
{
	int i = 0;
	int j = 0;
	printf("	");
	for (j = 0; j <= r1; j++)
	{
		if (j < 10)
		{
			printf("%d   ", j);
		}
		if (j >= 10)
		{
			printf("%d  ", j);
		}
	}
	printf("\n");
	for (i = 1; i <= l1; i++)
	{
		if (i < 10)
		{
			printf("	%d   ", i);
		}
		if (i >= 10)
		{
			printf("	%d  ", i);
		}
		for (j = 1; j <= r1; j++)
		{
			printf("%c   ", games[i][j]);
		}
		printf("\n");
	}
}

void lei2(char games[LS2][RS2], int l1, int r1)
{
	int shu = 40;
	while (shu)
	{
		int i = rand() % l1 + 1;
		int j = rand() % r1 + 1;
		if (games[i][j] == '0')
		{
			games[i][j] = '1';
			shu--;
		}
	}
}

int arr2(char games[LS2][RS2], int i, int j)
{
	return games[i - 1][j - 1] +
		games[i][j - 1] +
		games[i + 1][j - 1] +
		games[i + 1][j] +
		games[i + 1][j + 1] +
		games[i][j + 1] +
		games[i - 1][j + 1] +
		games[i - 1][j] - 8 * '0';
}

void pl2(char games1[LS2][RS2], char games2[LS2][RS2], int l1, int r1)
{
	int c = 0;
	int shu = 40;
	while (c < l1 * r1 - shu)
	{
		int i = 0;
		int j = 0;
		printf("	����������\n\t");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= l1 && j > 0 && j <= r1)
		{
			if (games1[i][j] == '1')
			{
				printf("		GAME OVER!!!\n		���ź����㱻ը����\n");
				Sleep(2000);
				printf("		��ϲ�㣬�������׳ɹ�!!!\n");
				Sleep(2000);
				PAN2(games1, L2, R2);
				break;
			}
			else
			{
				int tj = arr2(games1, i, j);
				games2[i][j] = tj + '0';
				PAN2(games2, L2, R2);
				c++;
				printf("\n");
			}
		}
		else
		{
			printf("		�����������������\n");
		}
	}
	if (c == l1 * r1 - shu)
	{
		printf("		Congratulations!!!\n		��ϲ�㣬���׳ɹ�!!!\n\n");
		PAN2(games1, L2, R2);
	}
}

//30*16

void NEW3(char games[LS3][RS3], int ls1, int rs1, char jk)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ls1; i++)
	{
		for (j = 0; j < rs1; j++)
		{
			games[i][j] = jk;
		}
	}
}

void PAN3(char games[LS3][RS3], int l1, int r1)
{
	int i = 0;
	int j = 0;
	printf("	");
	for (j = 0; j <= r1; j++)
	{
		if (j < 10)
		{
			printf("%d   ", j);
		}
		if (j >= 10)
		{
			printf("%d  ", j);
		}
	}
	printf("\n");
	for (i = 1; i <= l1; i++)
	{
		if (i < 10)
		{
			printf("	%d   ", i);
		}
		if (i >= 10)
		{
			printf("	%d  ", i);
		}
		for (j = 1; j <= r1; j++)
		{
			printf("%c   ", games[i][j]);
		}
		printf("\n");
	}
}

void lei3(char games[LS3][RS3], int l1, int r1)
{
	int shu = 99;
	while (shu)
	{
		int i = rand() % l1 + 1;
		int j = rand() % r1 + 1;
		if (games[i][j] == '0')
		{
			games[i][j] = '1';
			shu--;
		}
	}
}

int arr3(char games[LS3][RS3], int i, int j)
{
	return games[i - 1][j - 1] +
		games[i][j - 1] +
		games[i + 1][j - 1] +
		games[i + 1][j] +
		games[i + 1][j + 1] +
		games[i][j + 1] +
		games[i - 1][j + 1] +
		games[i - 1][j] - 8 * '0';
}

void pl3(char games1[LS3][RS3], char games2[LS3][RS3], int l1, int r1)
{
	int c = 0;
	int shu = 99;
	while (c < l1 * r1 - shu)
	{
		int i = 0;
		int j = 0;
		printf("	����������\n\t");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= l1 && j > 0 && j <= r1)
		{
			if (games1[i][j] == '1')
			{
				printf("		GAME OVER!!!\n		���ź����㱻ը����\n");
				Sleep(2000);
				printf("		��ϲ�㣬�������׳ɹ�!!!\n");
				Sleep(2000);
				PAN3(games1, L3, R3);
				break;
			}
			else
			{
				int tj = arr3(games1, i, j);
				games2[i][j] = tj + '0';
				PAN3(games2, L3, R3);
				c++;
				printf("\n");
			}
		}
		else
		{
			printf("		�����������������\n");
		}
	}
	if (c == l1 * r1 - shu)
	{
		printf("		Congratulations!!!\n		��ϲ�㣬���׳ɹ�!!!\n\n");
		PAN3(games1, L3, R3);
	}
}

void menu()
{
	printf("					\n");
	printf("	 1,Play game!	\n");
	printf("					\n");
	printf("	 2,Exit game!	\n");
	printf("					\n");
}

void kiss()
{
	printf("					\n");
	printf("		1,����		\n");
	printf("					\n");
	printf("		2,�м�		\n");
	printf("					\n");
	printf("		3,�߼�		\n");
	printf("	            	\n");
	printf("		4,Exit      \n");
	printf("	            	\n");
}

void game()
{
lb:

	int m = 0;
	printf("	��ӭ������Ϸ����ѡ����Ϸ�Ѷ�(1/2/3)\n");
	kiss();
	printf("\t");
	scanf("%d", &m);//ѡ��

	if (m == 1)
	{
		char games1[LS1][RS1] = { 0 };
		char games2[LS1][RS1] = { 0 };

		NEW1(games1, LS1, RS1, '0');
		NEW1(games2, LS1, RS1, '*');

		//PAN1(games1, L1, R1);
		printf("\n");
		PAN1(games2, L1, R1);
		printf("\n");

		lei1(games1, L1, R1);
		//PAN1(games1, L1, R1);
		printf("\n");

		pl1(games1, games2, L1, R1);
		printf("\n");
	}

	if (m == 2)
	{
		char games3[LS2][RS2] = { 0 };
		char games4[LS2][RS2] = { 0 };

		NEW2(games3, LS2, RS2, '0');
		NEW2(games4, LS2, RS2, '*');

		//PAN2(games1, L1, R1);
		printf("\n");
		PAN2(games4, L2, R2);
		printf("\n");

		lei2(games3, L2, R2);
		//PAN2(games1, L1, R1);
		printf("\n");

		pl2(games3, games4, L2, R2);
		printf("\n");
	}
	
	if (m == 3)
	{
		char games5[LS3][RS3] = { 0 };
		char games6[LS3][RS3] = { 0 };

		NEW3(games5, LS3, RS3, '0');
		NEW3(games6, LS3, RS3, '*');

		//PAN3(games1, L3, R3);
		printf("\n");
		PAN3(games6, L3, R3);
		printf("\n");

		lei3(games5, L3, R3);
		//PAN3(games1, L3, R3);
		printf("\n");

		pl3(games5, games6, L3, R3);
		printf("\n");
	}
	
	else if (m == 4)
	{
		printf("		���ڻص��˵�...\n");
	}

	else
	{
		printf("		�����������������...\n");
		goto lb;
	}	
}

int main()
{
	int i = 0;//�˵�ѡ��  
	int j = 1;//����һ����Ϊ��Ľ���ֵ

	srand((unsigned int)time(NULL));

	do
	{
		printf("	��ӭ������Ϸ����ѡ��...(1/2)\n");
		menu();//����ȫ�ֲ˵�
		printf("\t");
		scanf("%d", &i);//ѡ��

		switch (i)//switch��֧ѡ��
		{
		case 1:
			printf("		���ڽ�����Ϸ...\n");
			game();//��Ϸȫ������
			break;
		case 2:
			printf("		�����˳���Ϸ...\n");
			j = 0;//jΪ��
			break;
		default:
			printf("		�����������������...\n");//�������
			break;
		}
	} while (j);//ѭ��Ϊ�㣬��ֵ����ѭ��

	system("pause");//����ϵͳ�˵�

	return 0;
}