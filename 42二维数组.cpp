//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*int main(void)
{
	int arr[3][4] = { 0 };//����Ԫ�������±������ʵģ������ص㣬3,4��ʾ���������3��4�У�����ʱ���Ǵ�0��ʼ
	printf("%d\n", arr[0][1]);
	return 0;
}//���ʵ�������Ԫ��
*/

/*int main(void)
{
	int arr[][4] = { {1,2} ,{3,4} ,{5,6} };
	int h = sizeof(arr) / sizeof(arr[0]);
	int g = sizeof(arr) / sizeof(arr[0][0]);
	printf("%d\n", h);//���㼸��
	printf("%d\n", g);//�����м�������Ԫ��
	return 0;
}//����
*/

/*int main(void)
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
}//��ӡ����Ԫ��
*/

/*int main(void)
{
	int arr[][4] = { {1,2} ,{3,4} ,{5,6} };
	int h = sizeof(arr) / sizeof(arr[0]);
	int g = sizeof(arr) / sizeof(arr[0][0]);
	printf("%d\n", h);//���㼸��
	printf("%d\n", g);//�����м�������Ԫ��
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);//��ӡ��ÿһ����Ԫ��
		}
		printf("\n");
	}
	return 0;
}//����
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//����Ԫ�������±������ʵģ������ص㣬3,4��ʾ���������3��4�У�����ʱ���Ǵ�0��ʼ��3*4��ʾ��12������Ԫ��
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//�����±�
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//����Ԫ�������±������ʵģ������ص㣬3,4��ʾ���������3��4�У�����ʱ���Ǵ�0��ʼ��3*4��ʾ��12������Ԫ��
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p\t", i, j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//��ַ����
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//����Ԫ�������±������ʵģ������ص㣬3,4��ʾ���������3��4�У�����ʱ���Ǵ�0��ʼ��3*4��ʾ��12������Ԫ��
	int* p = &arr[0][0];
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		printf("%d = %d = %p\n", i, *p, p);
		(*p)++;
	}
	return 0;
}//�����ַ����ָ�����
*/