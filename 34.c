//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int input[100][4] = { 0 };
//	int a,i,j,count_1=0,count_2=0,re=0;
//	while (scanf("%d", &a) != EOF && a <= 100 && a > 0)
//	{
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < 4; j++)
//			{
//				scanf("%d", &input[i][j]);
//			}
//			re = input[i][0] + input[i][2];
//			if ((input[i][1] != re && input[i][3] != re) || (input[i][1] == re && input[i][3] == re))
//			{
//				;
//			}
//			else
//			{
//				if (re == input[i][1])
//					count_1++;
//				if (re == input[i][3])
//					count_2++;
//			}
//		}
//		break;
//	}
//	printf("%d %d", count_2, count_1);
//	return 0;
//}