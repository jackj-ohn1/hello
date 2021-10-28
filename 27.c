//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define max(A,B) (A)>(B) ? (A):(B)
//
//int main()
//{
//	int line, i, j, col;
//	int mod = 1;
//	double sum = 0.0;
//	double re = 0.0;
//	double money;
//	char flag;
//	while (scanf("%lf%d", &money, &line) != EOF && line <= 30)
//	{
//		int count = line;
//		double arr[30][30] = { 0.0 };
//		for (i = 0; i < line; i++)
//		{
//			count--;
//			scanf("%d", &col);
//			for (j = 0; j < col; j++)
//			{
//				scanf(" %c:%lf", &flag, &arr[i][j]);
//				if (flag != 'A' && flag != 'B'&&flag != 'C')
//				{
//					mod = 0;
//				}
//			}
//			for (int x = 0; x < col; x++)
//			{
//				if (arr[i][x] > 600.00)
//				{
//					mod = 0;
//					break;
//				}
//			}
//
//			if (mod == 0)
//			{
//				for (int x = 0; x < col; x++)
//				{
//					arr[i][x] = 0;
//				}
//			}
//
//		}
//
//		for (j = 0; j < line; j++)
//		{
//			sum = 0.0;
//			for (i = 0; i <= col; i++)
//			{
//				sum = arr[j][i] + sum;
//			}
//			if (sum > money)
//			{
//				sum = 0.0;
//			}
//			if (sum > 1000.00)
//			{
//				sum = 1000.00;
//			}
//			if (re < money)
//				re = re + sum;
//			if (re > money)
//			{
//				re = re - sum;
//			}
//		}
//		if (count <= 0)
//			printf("%.2lf", re);
//	}
//	return 0;
//}