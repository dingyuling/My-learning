/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int c_f(int x,int y)
{
	if (y > 1)//�ж���û�������
	{
		return x * c_f(x, y - 1);//ÿ�δ���-1
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return x;
	}
}

int main(void)
{
	int c = 0;//��
	printf("����Ҫ������\n");
	scanf("%d", &c);
	printf("\n");
	int n = 0;//�η�
	printf("����Ҫ���η���\n");
	scanf("%d", &n);
	printf("\n");

	int XX = c_f(c, n);//������

	printf("�η��ǣ�\n%d\n", XX);
	return 0;
}*/