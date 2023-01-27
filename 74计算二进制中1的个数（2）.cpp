/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int my_file(int c)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c & 1) == 1)
//		{
//			count++;
//		}
//		c >>= 1;
//	}
//	return count;
//}

//int my_file(unsigned int c)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c & 1) == 1)
//		{
//			count++;
//		}
//		c >>= 1;
//	}
//	return count;
//}

//int my_file(unsigned int c)
//{
//	int count = 0;
//	while (c)
//	{
//		if ((c & 1) == 1)
//		{
//			count++;
//		}
//		c >>= 1;
//	}
//	return count;
//}

//int my_file(unsigned int c)
//{
//	int count = 0;
//
//	while (c)
//	{
//		if ((c % 2) == 1)
//		{
//			count++;
//		}
//		c /= 2;
//	}
//	return count;
//}

//int my_file(unsigned int c)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

int my_file(unsigned int c)
{
	int count = 0;
	while (c)
	{
		c = c & (c - 1);
		count++;
	}
	return count;
}

int main(void)
{
	int a = 15;
	printf("%d\n", my_file(a));
	return 0;
}
*/