/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int j_s(int x)
{
	if (x > 9)//������һ��������������������
	{
		return x % 10 + j_s(x/10);//������
	}
	else
	{
		return x % 10;
	}
}

int main(void)
{
	int cz = 0;
	scanf("%d", &cz);

	int sum = j_s(cz);//�����

	printf("%d\n", sum);
	return 0;
}*/