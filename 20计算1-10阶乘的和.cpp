/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;//��
	int n = 0;//����*����
	int c = 1;//��1��ʼ*
	int sum = 0;//�����Ϊ0

	for (n = 1; n <= 10; n++)//n��1��ʼ��ÿ��+1ѭ��10��
	{
		c = 1;//cΪ1
		for (i = 1; i <= n; i++)//iΪ1��n����iѭ��������ÿ��ѭ��i+1
		{
			c *= i;//c=c*i
		}
		sum += c;//sum=sum+c
	}
	printf("sum=%d\n", sum);
	return 0;
}*/


/*#include<stdio.h>

int main()

{
	int n = 0;//n����*
	int c = 1;//*��1��ʼ
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		c *= n;
		sum += c;
	}//��һ�������1*1+1*2=3=1*3���Դ����ƣ���������һ��ѭ��
	printf("sum=%d\n", sum);
	return 0;
}*/