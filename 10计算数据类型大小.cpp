/*#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	int a = 10;
	printf("%d\n", sizeof(int));//����int��С
	printf("%d\n", sizeof(a));//����a��С����Ϊa����int�������ͣ�����sizeof(a)Ҳ���Լ����int��С
	printf("%d\n", sizeof(char));
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int arr[10] = { 0 };//10��Ԫ��
	//intռ�����ֽ�
	printf("%d\n", sizeof(arr));//��������arr������arr����[]

	printf("%d\n", sizeof(arr[0]));//���㵥������Ԫ�صĴ�С

	int num = sizeof(arr) / sizeof(arr[0]);//����һ����ֵ�����м�������Ԫ��

	printf("%d\n", num);

	return 0;
}*/


//�����������ʹ�С