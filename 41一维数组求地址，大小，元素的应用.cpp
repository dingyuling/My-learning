//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*int main(void)
{
	int arr[10] = { 0 };
	printf("%d\n", arr[0]);
	return 0;
}//��������
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);
	return 0;
}//�����м�������Ԫ��
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%d\t", arr[c]);
	}
	return 0;
}//������������е�����Ԫ��
*/

/*int main(void)
{
	int arr[10];
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%d\t", arr[c]);
	}
	return 0;
}//������Զ��帳ֵ
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��

	int c = 0;
	for (c = 0; c < i; c++)
	{
		if (c == 6)
		{
			arr[c] = 7;
		}
		printf("%d\t", arr[c]);
	}
	return 0;
}//����ֵ
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��

	int c = 0;
	for (c = 0; c < i; c++)
	{
		if (c > 0)
		{
			arr[c] = arr[c - 1] + 1;
			printf("%d\t", arr[c]);
		}	
		else
		{
			arr[c]++;
			printf("%d\t", arr[c]);
		}
	}
	return 0;
}//ÿ������Ԫ��++
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%p\n", &arr[c]);
	}
	return 0;
}//����16����λ�ã�ע��32λ��64λ��ַ��С��ͬ
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//�����м�������Ԫ��
	int* p = &arr[0];
	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%p = %p\n", p, &arr[c]);
	}
	return 0;
}//����16����λ�ã�ע��32λ��64λ��ַ��С��ͬ
*/

/*int main(void)
{
	printf("%d\n", 0x16);//����
	printf("%x\n", 0x16);//ֱ�Ӵ�ӡ
	printf("%p\n", 0x16);//16����λ��ȫ��ӡ
	return 0;
}//��ͬ�仯
*/