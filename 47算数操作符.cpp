//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*
int main(void)
{
	int i = 1;
	int j = 1;
	int x = 1;
	int y = 1;
	int c = 0;
	int b = 0;
	c = i++ + j++;
	b = ++x + ++y;
	printf("c = %d\n", c);
	printf("b = %d\n", b);
	return 0;
}//��+
*/

/*
int main(void)
{
	int i = 10;
	int j = 1;
	int x = 10;
	int y = 1;
	int c = 0;
	int b = 0;
	c = i-- - j--;
	b = --x - --y;
	printf("c = %d\n", c);
	printf("b = %d\n", b);
	return 0;
}//��-
*/

/*
int main(void)
{
	int i = 1;
	int j = 2;
	int c = 0;
	c = i * j;
	printf("c = %d\n", c);
	return 0;
}//��*
*/

/*
int main(void)
{
	int i = 1;
	int j = 2;
	int c = 0;
	c = i / j;
	printf("c = %d\n", c);//����1/2�ڼ������Ϊ0

	float x = 1.0;//�����.0��/����������һ��Ϊfloat���͵�����
	int  y = 2;
	float b = 0;
	b = x / y;
	printf("b = %f\n", b);
	printf("b = %.1f\n", b);//����С�����1λ��Ч����
	return 0;
}//��/
*/

/*
int main(void)
{
	int i = 0;
	int j = 2;
	int c = 0;
	c = i % j;
	printf("c = %d\n", c);//0/�κ�����Ϊ0������ģ��ȡ
	printf("\n");

	int i1 = 1;
	int j1 = 2;
	int c1 = 0;
	c1 = i1 % j1;
	printf("c1 = %d\n", c1);//1ģ�κ�����Ϊ������
	printf("\n");

	int i2 = 5;
	int j2 = 8;
	int j3 = 9;
	int j4 = 10;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	c2 = i2 % j2;
	c3 = i2 % j3;
	c4 = i2 % j4;
	printf("c2 = %d\n", c2);
	printf("c3 = %d\n", c3);
	printf("c4 = %d\n", c4);//ģ������С�������Ϊ������
	printf("\n");

	int x = 5;
	int y = 2;
	int b = 0;
	b = x % y;
	printf("b = %d\n", b);//��2��1��ȡ������Ϊģ��
	int x1 = 5;
	int y1 = 2;
	int b1 = 0;
	b1 = x1 % y1 + 1;
	printf("b1 = %d\n", b1);//ȡģ+1
	return 0;
}//ȡģ%
*/