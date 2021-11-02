//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n1, n2, i = 0, j, input, money, debt, judge;
//
//	scanf("%d%d", &money, &input);
//	
//	while (i < input)
//	{
//		int arr[4] = { 0 };
//		n1 = rand() % 10;
//		n2 = rand() % 10;
//		arr[0] = n1;
//		arr[3] = n2;
//		if (n1 != n2)
//		{
//			printf("ÇëÊäÈëÅÐ¶ÏºÍ¶Ä×¢£º");
//			scanf("%d%d", &judge, &debt);
//			arr[1] = judge;
//			arr[2] = debt;
//			for (j = 0; j < 4; j++)
//			{
//				printf("%d ", arr[j]);
//			}
//			printf("\n");
//			if (debt > money)
//			{
//				printf("Not enough tokens. Total = %d.\n", money);
//				continue;
//			}
//			else
//			{
//				if ((n1 < n2) == judge)
//				{
//					money += debt;
//					printf("Win %d! Total = %d.\n", debt, money);
//				}
//				else
//				{
//					money -= debt;
//					if (money <= 0)
//					{
//						printf("Game Over!");
//						break;
//					}
//					else
//						printf("Lose %d. Total = %d.\n", debt, money);
//				}
//			}
//		}
//		i++;
//	}
//
//	return 0;
//}