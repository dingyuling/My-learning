#define _CRT_SECURE_NO_WARNINGS 1
//���������ַ����е��ַ��������У�����һһ��ӡ������ʹ�ÿ⺯��

#include<stdio.h>


int j_s(char* x)//�Զ���strlen
{
	int c = 0;
	while (*x++ != '\0')//�ַ������Դ�\0
	{
		c++;
	}
	return c;
}

void f_x(char* ch)//ȡ�ַ�����ַ
{
	int j = j_s(ch);//�����ַ�������
	int l = 0;//���
	int r = j-1;//�ұ�
	char f[20] = { 0 };//������
	while (l < r)
	{
		*f = ch[l];
		ch[l] = ch[r];
		ch[r] = *f;
		l++;
		r--;//�±���㽻��
	}
	printf("%s\n", ch);//������
}

int main(void)
{
	char ch[20] = { 0 };
	scanf("%s", ch);//����

	f_x(ch);

	return 0;
}

//�ݹ�
/*
int j_s(char* x)//�Զ���strlen
{
	if (*x != '\0')
	{
		return 1 + j_s(x + 1);//����
	}
	else
	{
		return 0;
	}
}

void f_x(char* ch)//ȡ�ַ�����ַ
{
	int j = j_s(ch);//�����ַ�������
	char f[20] = { 0 };//������
	*f = *ch;//��ֵ�յ�ַ
	*ch = ch[j - 1];//���һλ�ŵ�һ
	ch[j - 1] = '\0';//�ַ������ֵ
	if (j_s(ch + 1) >= 2)//��ַ��һλ
	{
		f_x(ch + 1);//�����һλ
	}
	ch[j - 1] = *f;
}

int main(void)
{
	char ch[20] = { 0 };
	scanf("%s", ch);//����

	f_x(ch);

	printf("%s\n", ch);
	return 0;
}*/