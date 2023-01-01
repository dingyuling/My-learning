#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//引用系统
#include<time.h>//时间戳

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
	printf("玩家...\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入...\n");
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
				printf("坐标占用，请重新输入...\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入...\n");
		}
	}
}

void pcer(char qp[3][3], int m, int n)
{
	int x = 0;
	int y = 0;
	printf("电脑...\n");
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

void menu()//定义菜单
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
		printf("玩家赢...\n");
	}
	else if (ch == 'x')
	{
		printf("电脑赢...\n");
	}
	else
	{
		printf("平局...\n");
	}
	pan(qp, 3, 3);
}

int main()
{
	int i = 0;//菜单选项
	int j = 1;//定义一个不为零的结束值

	srand((unsigned int)time(NULL));

	do
	{
		printf("欢迎来到游戏，请选择...(1/2)\n");
		menu();//引用全局菜单
		scanf("%d", &i);//选项

		switch (i)//switch分支选项
		{
		case 1:
			printf("正在进入游戏...\n");
			game();//游戏全局引用
			break;
		case 2:
			printf("正在退出游戏...\n");
			j = 0;//j为零
			break;
		default:
			printf("输入错误，请重新输入...\n");//其他情况
			break;
		}
	} while (j);//循环为零，假值跳出循环

	system("pause");//调用系统菜单

	return 0;
}
