#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//1.在屏幕上输出以下图案：
//      * 1
//     *** 3
//    ***** 5 
//   ******* 7
//  ********* 9
// *********** 11
//************* //13
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//


//int main()
//{
//	int input = 0;
//	
//	printf("输入中间行*的个数(奇数)....");
//	scanf("%d", &input);
	
//	for (int i = 0; i < input/2 +1; i++)
//	{
//		for (int j = 0; j < input / 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <= 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");		
//	}
//
//	for (int i = 0; i < input / 2; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < (input-2)-2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），
//是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//

//int main()
//{
//	int i = 0;
//	int c = 3;
//	for (i = 0; i < 1000; i++)
//	{
//		if (i < 100 && i >= 0)
//		{
//			continue;
//		}
//		if (i < 1000 && i >=100)
//		{   
//			int hun, ten, ind;
//			hun = i / 100;
//			ten = (i - 100*hun)/10;
//			ind = i % 10;
//
//			if (i == (hun*hun*hun + ten*ten*ten + ind*ind*ind))
//			{
//				printf("%d ", i);
//				continue;
//			}
//		}
//	}
//	return 0;
//}



//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int sum = 0;
	int b = 5;
	printf("please input a int number!");
	scanf("%d", &a);
	
	while (b)
	{
		for (int i = 0; i < b; i++)
		{
			sum += (a * powl(10, i));
			
		}
		b--;
	}
	printf("%d", sum);
	return 0;
}

