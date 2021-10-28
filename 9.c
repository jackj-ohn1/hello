//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	int year, month, day;
//	int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int i = 0;
//	int sum = 0;
//	while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
//	{
//
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			for (i = 0; i < month - 1; i++)
//			{
//				sum = sum + a[i];
//			}
//		}
//		else
//		{
//			for (i = 0; i < month - 1; i++)
//			{
//				sum = sum + b[i];
//			}
//		}
//		sum = sum + day;
//		printf("%d\n", sum);
//	}
//	return 0;
//}