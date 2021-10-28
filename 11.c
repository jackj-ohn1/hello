//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num, wel_num;
//	int money[100000] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	while (scanf("%d %d", &num, &wel_num) != EOF && num > 0 && num < 100000 && wel_num <= 10 && num>0)
//	{
//		if (num == wel_num && num == 0)
//		{
//			break;
//		}
//		for (i = 0; i < num; i++)
//		{
//			scanf("%d", &money[i]);
//		}
//
//		for (i = 0; i < num ; i++)
//		{
//			for (j = i + 1; j < num; j++)
//			{
//				if (money[i] < money[j])
//				{
//					tmp = money[i];
//					money[i] = money[j];
//					money[j] = tmp;
//				}
//			}
//		}
//		if (num < wel_num)
//		{
//			for (i = 0; i < num; i++)
//			{
//				printf("%d ", money[i]);
//			}
//		}
//		else
//		{
//			for (i = 0; i < wel_num; i++)
//			{
//				printf("%d ", money[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}