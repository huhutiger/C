#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//1.����Ļ���������ͼ����
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
//	printf("�����м���*�ĸ���(����)....");
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


//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number����
//��ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
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



//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

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

