#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1. 给定两个整形变量的值，将两个值的内容进行交换。

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("请输入两个整数....\n");
//	scanf("%d%d", &i, &j);
//
//	temp = i;
//	i = j;
//	j = temp;
//	printf("交换后....\n");
//	printf("%d %d\n", i, j);
//	return 0;
//}

//2. 不允许创建临时变量，交换两个数的内容（附加题）
//第一次未解答出来



//3.求10 个整数中最大值--自己的。
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



//课堂
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



//4.将三个数按从大到小输出--自己和课程。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; 
//	int temp = 0;
//	printf("请输入三个数a/b/c....\n");
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
//	printf("从大到小依次排序：\n%d %d %d\n", a, b, c);
//
//	return 0;
//}





//5.求两个数的最大公约数。
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
	//system()- 执行系统命令的
	system("shutdown -s -t 120");
    again:
	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}