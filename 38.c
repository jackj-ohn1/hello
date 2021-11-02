//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int col, row, i, j;
//	int scores[100] = { 0 };
//	int answer[100] = { 0 };
//	int input[98][98] = { 0 };
//	int re[100] = { 0 };
//	scanf("%d%d", &row, &col);
//	if (row <= 100 && col <= 100)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			if (i == 0)
//			{
//				for (j = 0; j < col; j++)
//				{
//					scanf("%d", &scores[j]);
//				}
//			}
//			else
//			{
//				for (j = 0; j < col; j++)
//				{
//					scanf("%d", &answer[j]);
//				}
//			}
//		}
//		for (i = 0; i < row; i++)
//		{
//			int sum = 0;
//			for (j = 0; j < col; j++)
//			{
//				scanf("%d", &input[i][j]);
//				if (input[i][j] == answer[j])
//				{
//					sum = sum + scores[j];
//					re[i] = sum;
//				}
//			}
//		}
//		for (i = 0; i < row; i++)
//		{
//			if (i < row - 1)
//			{
//				printf("%d\n",re[i]);
//			}
//			else
//				printf("%d", re[i]);
//		}
//	}
//	return 0;
//}