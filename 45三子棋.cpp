#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//����ϵͳ
#include<time.h>//ʱ���

void pan(char qp[3][3], int m, int n)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < m; x++)
	{
		for (y = 0; y < n; y++)
		{
			printf(" %c ", qp[x][y]);
			if (y < n - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (y = 0; y < n; y++)
		{
			if (x < m - 1)
			{
				printf("---");
				if (y < n - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void player(char qp[3][3], int m, int n)
{
	printf("���...\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("������...\n");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= m) && (y >= 1 && y <= n))
		{
			if (qp[x - 1][y - 1] == ' ')
			{
				qp[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("����ռ�ã�����������...\n");
			}
		}
		else
		{
			printf("�����������������...\n");
		}
	}
}

void pcer(char qp[3][3], int m, int n)
{
	int x = 0;
	int y = 0;
	printf("����...\n");
	while (1)
	{
		x = rand() % m;
		y = rand() % n;
		//if ((x >= 1 && x <= m) && (y >= 1 && y <= n))
		{
			if (qp[x][y] == ' ')
			{
				qp[x][y] = 'x';
				break;
			}
			//else
			{
				;
			}
		}
		//else
		{
			;
		}
	}
}

char winer(char qp[3][3], int m, int n)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < m; x++)
	{
		if ((qp[x][0] == qp[x][1] && qp[1][1] == qp[x][2]) && qp[x][1] != ' ')
		{
			return qp[x][1];
		}
	}
	for (y = 0; y < n; y++)
	{
		if ((qp[0][y] == qp[1][y] && qp[1][1] == qp[2][y]) && qp[1][y] != ' ')
		{
			return qp[1][y];
		}
	}
	if ((qp[0][0] == qp[1][1] && qp[1][1] == qp[2][2]) && qp[1][1] != ' ')
	{
		return qp[1][1];
	}
	if ((qp[2][0] == qp[1][1] && qp[1][1] == qp[0][2]) && qp[1][1] != ' ')
	{
		return qp[1][1];
	}
	for (x = 0; x < m; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (qp[x][y] == ' ')
			{
				return 't';
			}
		}
	}
	return 'f';
}

void menu()//����˵�
{
	printf("              \n");
	printf(" 1,Play game! \n");
	printf("              \n");
	printf(" 2,Exit game! \n");
	printf("              \n");
}

void game()
{
	char qp[3][3] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };

	pan(qp, 3, 3);

	char ch = 0;

	while (1)
	{
		player(qp, 3, 3);
		pan(qp, 3, 3);
		ch = winer(qp, 3, 3);
		if (ch != 't')
		{
			break;
		}

		pcer(qp, 3, 3);
		pan(qp, 3, 3);
		ch = winer(qp, 3, 3);
		if (ch != 't')
		{
			break;
		}
	}

	if (ch == 'o')
	{
		printf("���Ӯ...\n");
	}
	else if (ch == 'x')
	{
		printf("����Ӯ...\n");
	}
	else
	{
		printf("ƽ��...\n");
	}
	pan(qp, 3, 3);
}

int main()
{
	int i = 0;//�˵�ѡ��
	int j = 1;//����һ����Ϊ��Ľ���ֵ

	srand((unsigned int)time(NULL));

	do
	{
		printf("��ӭ������Ϸ����ѡ��...(1/2)\n");
		menu();//����ȫ�ֲ˵�
		scanf("%d", &i);//ѡ��

		switch (i)//switch��֧ѡ��
		{
		case 1:
			printf("���ڽ�����Ϸ...\n");
			game();//��Ϸȫ������
			break;
		case 2:
			printf("�����˳���Ϸ...\n");
			j = 0;//jΪ��
			break;
		default:
			printf("�����������������...\n");//�������
			break;
		}
	} while (j);//ѭ��Ϊ�㣬��ֵ����ѭ��

	system("pause");//����ϵͳ�˵�

	return 0;
}