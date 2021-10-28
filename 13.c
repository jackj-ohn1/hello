//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int row = 0;
//	int arr[10][3] = { 0 };
//	int i;
//	char flag_1[6] = "true";
//	while (scanf("%d", &row) != EOF && row <= 10)
//	{
//		for (i = 0; i < row; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//
//		for (i = 0; i < row; i++)
//		{
//			char flag[6] = "false";
//			int j = 0;
//			if (arr[i][j] + arr[i][j + 1] > arr[i][j + 2])
//			{
//				for (int x = 0; x < 6; x++)
//				{
//					flag[x] = flag_1[x];
//				}
//			}
//			printf("Case #%d: %s", i+1, flag);
//			printf("\n");
//		}
//	}
//	return 0;
//}