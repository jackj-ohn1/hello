//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define Max(a,b) (a>b) ? (a):(b)
//#define Min(a,b) (a<b) ? (a):(b)
//
//int main()
//{
//	int a, b,tmp,max,min,re;
//	printf("touch number 0 to exit!\n");
//	while (scanf("%d%d", &a, &b) != EOF && a > 0 && a <= 1000 && b > 0 && b <= 1000)
//	{
//		if (a == 0 && b == 0)
//			break;
//		re = a * b;
//		max = Max(a, b);
//		min = Min(a, b);
//		while (1)
//		{
//			tmp = max % min;
//			if (tmp == 0)
//				break;
//			max = min;
//			min = tmp;
//		}
//		printf("%d\n", re / min);
//	}
//	return 0;
//}