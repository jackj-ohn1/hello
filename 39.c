//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int input, i, j, count = 0;
//	int salary[100] = { 0 };
//	while (scanf("%d", &input) != EOF && input <= 100 && input > 0)
//	{
//		for (i = 0; i < input; i++)
//		{
//			scanf("%d", &salary[i]);
//		}
//		for (j = 0; j < input; j++)
//		{
//			if (salary[j] >= 100)
//			{
//				int a = salary[j] % 100;
//				count = salary[j] / 100;
//				if (a >= 50)
//				{
//					count = count + 1;
//					a = a - 50;
//				}
//				if (a >= 10)
//				{
//					count = count + a / 10;
//					a = a % 10;
//				}
//				if (a >= 5)
//				{
//					count = count + 1;
//					a = a % 5;
//				}
//				if (a >= 2)
//				{
//					count = count + a / 2;
//					a = a % 2;
//				}
//				count = count + a;
//			}
//			if (salary[j] < 100)
//			{
//				int a = salary[j];
//				if (a >= 50)
//				{
//					count = count + 1;
//					a = a - 50;
//				}
//				if (a >= 10)
//				{
//					count = count + a / 10;
//					a = a % 10;
//				}
//				if (a >= 5)
//				{
//					a = a % 5;
//					count = count + 1;
//				}
//				if (a >= 2)
//				{
//					count = count + a / 2;
//					a = a % 2;
//				}
//				count = count + a;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}