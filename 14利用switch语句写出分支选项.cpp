/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i;//����һ����Ҫ��ֵ��

	printf("�������ֵ��\n");
	scanf("%d", &i);

	switch (i)//����ӷ���
	{
		case 1://case��ӣ�
			printf("��һ\n");
			break;//ÿһ��case������break
		case 2:
			printf("�ܶ�\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("����\n");
			break;
		case 5:
			printf("����\n");
			break;
		case 6:
			printf("����\n");
			break;
		case 7:
			printf("����\n");
			break;
		default://Ĭ�������
			printf("�������\n");
			break;
	}	
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int m;

	printf("����ֵ��\n");
	scanf("%d", &m);

	switch (m)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5://û�����ֵ��break���ʾ1-5��Ϊһ��break��β
			printf("����\n");
			break;
		case 6:
		case 7:
			printf("˯��\n");
			break;
		default:
			printf("�������\n");
			break;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int a = 1;
	int b = 2;//�����ʼ��ֵ

	switch (a)//ȡa��ֵ
	{
		case 1:
			a++;
		case 2:
			b++;
		case 3:
			a = a + b;
		case 4:
			switch (b)
			{
				case 2:
					a++;
					b++;
				case 3:
					a = a * 2;
					b = b * 2;
					break;
				case 4:
					a++;
					b++;
					break;
			}
			break;
		case 5:
			a = a * 5;
			b = b * 5;
			break;
		default:
			printf("******");
			break;
	}//����������
	printf("a=%d\nb=%d\n", a, b);//������
	return 0;
}*/