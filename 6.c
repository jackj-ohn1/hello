//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int unsign[100] = { 0 };
//	int sign[100] = { 0 };
//	while (scanf("%d", &input) && input <= 100)
//	{
//		if (input == 0)
//			break;
//		for (i = 0; i < input; i++)//将输入的数据存储起来
//		{
//			scanf("%d", &sign[i]);
//			unsign[i] = abs(sign[i]);
//		}
//
//		for (i = 0; i < input - 1; i++)
//		{
//			for (j = i + 1; j < input; j++)
//			{
//				if (abs(sign[i]) == abs(sign[j]))
//				{
//					goto label;
//				}
//			}
//		
//		}
//		for (i = 0; i < input - 1; i++)
//		{
//			for (j = i + 1; j < input; j++)
//			{
//				if (unsign[i] < unsign[j])
//				{
//					tmp = unsign[i];
//					unsign[i] = unsign[j];
//					unsign[j] = tmp;
//				}
//			}
//		}
//
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input; j++)
//			{
//				if (abs(sign[j]) == unsign[i])
//				{
//					unsign[i] = sign[j];
//				}
//			}
//		}
//		
//
//		for (i = 0; i < input - 1; i++)
//		{
//			printf("%d ", unsign[i]);
//		}
//		printf("%d\n", unsign[input-1]);
//	}
//	if (input == 10000)
//	{
//	label:
//		printf("输入的数中有绝对值相等的数。");
//	}
//	return 0;
//}
//
