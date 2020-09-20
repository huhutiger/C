#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int main()
//{
//	char arr1[] = { '1', '2', '3', '4', '5' };
//	char arr2[] = { '5','4','3','2','1'};
//	char temp;
//	int i;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i <=sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;	
//
//	}
//	for (i=0; i < sz; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}



//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。

//int main()
//{
//	int i = 0;
//	float flag = 1.0f;
//	float sum = 0.0f;
//	for (i = 1; i <=100 ; i++)
//	{
//		sum += flag / i;
//		flag = - flag;
//	}
//	
//	printf("%lf\n", sum);
//	return 0;
//}

//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	
//	{
//		if ((i % 10)  == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//		if ((i / 10) == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}