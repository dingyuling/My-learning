//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>

/*
int main(void)
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", & *p);
	printf("%p\n", &p);
	printf("%d\n", a);
	return 0;
}
*/

/*
int main(void)
{
	int a = 0x11223344;
	printf("%d\n", a);
	int b = 0x0011223344;
	printf("%d\n", b);
	int c = 0x211223344;//�����ĸ��ֽڣ�ÿλ4��16����λ����������д���ڴ�ռ�
	printf("%d\n", c);
	int d = 0x000000C1666FF8C4;//64λ16����
	printf("%d\n", d);//�ڴ�ض�
	return 0;
}
*/

/*
int main(void)
{
	int a = 0x11223344;
	int* p = &a;
	*p = 0;//�����ڴ�ɼ��仯

	int b = 0x11223344;
	char* pb = &b;
	*pb = 0;//�����ڴ�ɼ��仯,����ΪcԴ�ɿ���c++��֧��ת��

	return 0;
}
*/

/*
int main(void)
{
	int arr[] = { 0 };
	int* p = arr;
	printf("%p\n", p);
	printf("%p\n", arr);
	printf("%p\n", p + 1);
	char* pa = arr;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);//���ʵ�ֻ�ǵ�����������Ԫ�ص�4���ֽ��е�����һ���ֽ�
	return 0;
}
*/

/*
int main(void)
{
	int arr[10] = { 0 };
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
		printf("%d\t", arr[i]);
		printf("%p\n", p + i);
	}
	return 0;
}
*/

/*
int main(void)
{
	int arr[10] = { 0 };
	char* p = arr;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
		printf("%d\t", arr[i]);
		printf("%d\n", arr[j]);
		j++;
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}
	return 0;
}
*/