#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main(void)
{
	int i = 0;
	printf("%d\n", i);
	printf("%d\n", !i);//1
	i = 1;
	printf("%d\n", i);
	printf("%d\n", !i);//0
	i = !i;
	if (i)
	{
		printf("hyl");
	}
	if (!i)
	{
		printf("dyl");
	}
	return 0;
}


/*
int main(void)
{
	int i = 1;
	i = -i;
	printf("%d\n", i);
	i = +i;
	printf("%d\n", i);
	i = -i;
	printf("%d\n", i);
	return 0;
}
*/

/*
int main(void)
{
	int i1 = sizeof(int);
	int i2 = sizeof(short);
	int i3 = sizeof(float);
	int i4 = sizeof(double);
	printf("%d\t%d\t%d\t%d\n", i1, i2, i3, i4);
	int i = 2;
	short j = 10;
	printf("%d\n", unsigned(sizeof(j = i + j)));//计算的是j
	printf("%d\n", j);//sizeof不会影响结果
	j = i + j;
	printf("%d\n", j);//12
	int a = 0;
	int arr[10];
	printf("%d\n", unsigned(sizeof a));
	printf("%d\n", unsigned(sizeof(int)));
	printf("%d\n", unsigned(sizeof arr));
	printf("%d\n", unsigned(sizeof(int[10])));
	return 0;
}
*/

/*
int main(void)
{
	int i = -1;
	int j = ~i;
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}
*/

/*
int main(void)
{
	int i = 5;
	int j = i++;
	printf("%d\n", i);
	printf("%d\n", j);
	i = 5;
	j = ++i;
	printf("%d\n", i);
	printf("%d\n", j);

	i = 5;
	j = --i;
	printf("%d\n", i);
	printf("%d\n", j);
	i = 5;
	j = i--;
	printf("%d\n", i);
	printf("%d\n", j);

	int a = 1;
	int b = ++a + ++a + ++a;
	printf("%d\n", b);//问题代码
	return 0;
}
*/

/*
int main(void)
{
	int i = 10;
	printf("*i = %p\n", &i);
	int* j = &i;
	printf("*j = %d\n", *j);
	printf("*j = %p\n", &*j);
	printf("*j = %p\n", &j);//地址不同
	printf("i = %d\n", i);
	*j = 20;
	printf("i = %d\n", i);
	return 0;
}
*/

/*
int main(void)
{
	//int i1 = 3.1415926;
	//printf("%d\n", i1);
	int i2 = (int)3.1415926;
	printf("%d\n", i2);
	return 0;
}
*/
