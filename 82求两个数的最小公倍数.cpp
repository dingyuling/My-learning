#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main(void)
//{
//	int i = 3;
//	int j = 5;
//	int a = 0;
//	int b = 0;
//	if (a == i % j)
//	{
//		b = i;
//	}
//	else if (a == j % i)
//	{
//		b = j;
//	}
//	else
//	{
//		b = i * j;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main(void)
//{
//	int i = 3;
//	int j = 5;
//	int a = 0;
//	a = i > j ? i : j;
//	while (a)
//	{
//		if ((a % i == 0) && (a % j == 0))
//		{
//			break;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}

int main(void)
{
	int i = 3;
	int j = 5;
	int a = 0;
	for (a = 1;; a++)
	{
		if (((i * a) % j) == 0) 
		{
			break;
		}
	}
	printf("%d\n", i * a);
	return 0;
}
