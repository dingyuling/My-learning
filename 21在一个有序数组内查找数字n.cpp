/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������
	int a = 0;//ȡ����
	scanf("%d", &a);//ȡa�ĵ�ַ
	int s = sizeof(arr) / sizeof(arr[0]);//�����м�������Ԫ��

	int l = 0;//left���
	int r = s - 1;//right�ұߣ������ַ��0��ʼ-1
	while (l <= r)//ѭ������
	{
		int z = (l + r) / 2;//�м�ֵ�ĵ�ַ

		if (arr[z] < a)//a���ұ�
		{
			l = z + 1;//r���䣬l�ĵ�ַΪ�м�ֵ�ĵ�ַ+1
		}
		else if (arr[z] > a)//���
		{
			r = z - 1;//l���䣬r-1
		}
		else
		{
			printf("���ҽ���  %d\n", z);//û�п��ҵ��ˣ�������
			break;
		}
	}
	if (l > r)//��ߵ�ַ�����ұ�
	{
		printf("�޷�����\n");//�������
	}
	return 0;
}*/