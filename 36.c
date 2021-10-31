//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define max(A,B) (A)>(B)?(A):(B)
//#define min(A,B) (A)<(B)?(A):(B)
//
//struct Per
//{
//	char name[20];
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	struct Per data[10000] = { 0 };
//	int input, i, j, count = 0,re_year = 0;
//	int re_month = 0, re_day = 0,min_year = 2015,min_month = 2015,min_day = 2015;
//	scanf("%d", &input);
//	int youngest = 0, elder = 0;
//	for (i = 0; i < input; i++)
//	{
//		scanf("%s %d/%d/%d", &data[i].name, &data[i].year, &data[i].month, &data[i].day);
//		if (((data[i].year - 1814) * 360 + (data[i].month - 9) * 30 + (data[i].day - 6)) <= (200 * 360 + 9 * 30 + 6) && ((data[i].year - 1814) * 360 + (data[i].month - 9) * 30 + (data[i].day - 6)) >= 0)
//		{
//			count++;	
//		}
//		else
//		{
//			data[i].year = 0;
//			data[i].month = 0;
//			data[i].day = 0;
//		}
//	}
//
//	for (j = 0; j < input; j++)
//	{
//		if (data[j].month > 0 && data[j].year > 0 && data[j].day > 0)
//		{
//			re_year = max(re_year, data[j].year);
//			min_year = min(min_year, data[j].year);
//		}
//	}
//	for (i = 0; i < input; i++)
//	{
//		if (data[i].month > 0 && data[i].year > 0 && data[i].day > 0)
//		{
//			if (data[i].year == re_year)
//			{
//				re_month = max(re_month, data[i].month);
//				for (j = 0; j < input; j++)
//				{
//					if (data[j].month == re_month)
//					{
//						re_day = max(re_day, data[j].day);
//					}
//				}
//			}
//			if (data[i].year == min_year)
//			{
//				min_month = min(min_month, data[i].month);
//				for (j = 0; j < input; j++)
//				{
//					if (data[j].month == min_month)
//					{
//						min_day = min(min_day, data[j].day);
//					}
//				}
//			}
//		}
//	}
//	for (i = 0; i < input; i++)
//	{
//			if (data[i].year == re_year && data[i].month == re_month && data[i].day == re_day)
//				youngest = i;
//			if (data[i].year == min_year && data[i].month == min_month && data[i].day == min_day)
//			{
//			elder = i;
//			}
//	}
//
//	printf("%d %s %s", count, data[elder].name, data[youngest].name);
//	return 0;
//}