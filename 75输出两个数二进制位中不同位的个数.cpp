#define _CRT_SECURE_NO_WARNINGS 1
//22	33
#include<stdio.h>

//int my_file(unsigned int i, unsigned int j)
//{
//	int count = 0;
//	int m = 0;
//	while (m < 32)
//	{
//		if (((i & 1) == 1) != ((j & 1) == 1))
//		{
//			count++;
//		}
//		i >>= 1;
//		j >>= 1;
//		m++;
//	}
//	return count;
//}

//int my_file(unsigned int i, unsigned int j)
//{
//	int count = 0;
//	int m = 0;
//
//	int l = 0;
//	int r = 0;
//
//	while (m < 32)
//	{
//		l = i;
//		r = j;
//
//		if ((((l >> m) ^ (r >> m)) & 1) == 1)
//		{
//			count++;
//		}
//		m++;
//	}
//	return count;
//}

int my_file(unsigned int i, unsigned int j)
{
	int count = 0;
	int m = 0;

	int y = i ^ j;

	while (m < 32)
	{
		if ((y & 1) == 1)
		{
			count++;
		}
		y >>= 1;
		m++;
	}
	return count;
}

int main(void)
{
	int a = 22;//0001 0110
	int b = 33;//0010 0001

	printf("%d\n", my_file(a, b));

	return 0;
}
