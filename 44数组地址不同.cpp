/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int arr[10] = { 0 }; 
	int x = sizeof(arr);
	printf("x = %d\n", x);

	printf("%p ��������ַ\n", arr);
	printf("%p ��������ַ+1\n", arr + 1);//4���ֽ�
	printf("%p �����һ��Ԫ�ص�ַ\n", &arr[0]);
	printf("%p ����ڶ���Ԫ�ص�ַ\n", &arr[1]);
	printf("\n");
	printf("%p ��������ĵ�ַ\n", &arr);
	printf("\n");
	for (int i = 0; i <= 10; i++)
	{
		if (i == 10)
		{
			printf("\n");
			printf("arr[%d]=%p\n", i, &arr[i]);
		}
		else
		{
			printf("arr[%d]=%p\n", i, &arr[i]);
		}
	}
	printf("\n");
	printf("%p ���������ַ+1\n", &arr + 1);//40���ֽ�
	return 0;
}

//�������������
//sizeof(������)-��������ĳ��ȣ�����Ԫ�صĸ���-��λ�ֽ�
//&������-��ʾ��������-ȡ�����������ַ

*/