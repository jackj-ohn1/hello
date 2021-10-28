//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int input[10] = { 0 };
//	int re_1[90] = { 0 };
//	int re_2[90] = { 0 };
//	int i = 0;
//	int tmp;
//	int x = -1;
//	int y = -1;
//	int sum = 0;
//	scanf("%d", &tmp);
//	for (i = 0; i < tmp; i++)
//	{
//		scanf("%d", &input[i]);
//	}
//	for (i = 0; i < tmp; i++)
//	{
//		for (int j = i + 1; j < tmp; j++)
//		{
//			x = x + 1;
//			re_1[x] = input[i] * 10 + input[j];
//		}
//	}
//	for (i = tmp-1; i >=0 ; i--)
//	{
//		for (int j = i-1; j >=0; j--)
//		{
//			y = y + 1;
//			re_2[y] = input[i] * 10 + input[j];
//		}
//	}
//	for (i = 0; i < 90; i++)
//	{
//		sum = sum + re_1[i] + re_2[i];
//	}
//	
//	printf("%d", sum);
//	return 0;
//}