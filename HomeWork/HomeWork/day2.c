#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1. �����������α�����ֵ��������ֵ�����ݽ��н�����

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("��������������....\n");
//	scanf("%d%d", &i, &j);
//
//	temp = i;
//	i = j;
//	j = temp;
//	printf("������....\n");
//	printf("%d %d\n", i, j);
//	return 0;
//}

//2. ����������ʱ���������������������ݣ������⣩
//��һ��δ������



//3.��10 �����������ֵ--�Լ��ġ�
//int main()
//{
//	int arr[] = { 12, 13, 5, 85, 73, 8, 98, 76, 80, 73 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{	
//		int tem = 0;
//		if (arr[i] > arr[i + 1])
//		{	
//			arr[i + 1] = arr[i];
//		}
//	}
//	printf("%d\n", arr[sz - 1]);
//	return 0;
//}



//����
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -6, -8, -9, -10 };
//	int max = arr[0];//max value
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}



//4.�����������Ӵ�С���--�Լ��Ϳγ̡�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; 
//	int temp = 0;
//	printf("������������a/b/c....\n");
//	scanf("%d%d%d", &a,&b,&c);
//	printf("%d %d %d\n", a, b, c);
//	if (a<b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("�Ӵ�С��������\n%d %d %d\n", a, b, c);
//
//	return 0;
//}





//5.�������������Լ����
//
//int main()
//{
//	int m = 24; //18
//	int n = 18;  //24
//	int r = 0;
//	scanf("%d%d", &m ,&n);
//	while(r=m%n)
//	{
//		//r = m%n; 6    | 18  6 
//		m = n;//   18   | 24  18
//		n = r;//   6    | 18  6
//	}
//	printf("%d\n", n);
//	return 0;
//}


#include <string.h>

int main()
{
	char input[20] = {0};
	//shutdown -s -t 60
	//system()- ִ��ϵͳ�����
	system("shutdown -s -t 120");
    again:
	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}