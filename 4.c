//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Maxnum(int a, int b)
//{
//	int tmp = 1;
//	int max = 0;
//	int min = 0;
//	//ÅÐ¶Ï´óÐ¡
//	if (a > b)
//	{
//		min = b;
//		max = a;
//	}
//	else if (a == b)
//	{
//		return a;
//	}
//	else
//	{
//		max = b;
//		min = a;
//	}
//	while (1)
//	{
//		tmp = max % min;
//		if (tmp == 0)
//		{
//			break;
//		}
//		max = min;
//		min = tmp;
//	}
//	return min;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int re = Maxnum(a, b);
//	printf("%d", re);
//	return 0;
//}