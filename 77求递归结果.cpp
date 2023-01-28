#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int count = 0;

int fl(int a)
{
	count++;
	if (a == 0)
	{
		return 1;
	}
	else if (a == 1)
	{
		return 2;
	}
	else
	{
		return fl(a - 1) + fl(a - 2);
	}
}

int main(void)
{
	int i = 8;
	fl(i);
	printf("%d\n", count);
	return 0;
}//67
