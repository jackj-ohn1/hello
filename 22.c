//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define CLK_TCK 100
//
//int pow(int a, int b)
//{
//	int i;
//	int re = 1;
//	for (i = 0; i < b; i++)
//	{
//		re = a * re;
//	}
//	return re;
//}
//
//int main()
//{
//	int c1, c2, hour, min,tmp,sec;
//	int max = pow(10, 7);
//	scanf("%d %d", &c1, &c2);
//	if (c1 >= 0 && c2 <= max && c2>=0 && c2 <= max)
//	{
//		tmp = (c2 - c1) / 100.0 + 0.5;
//		printf("%d", tmp);
//		hour = tmp / 3600;
//		tmp = tmp % 3600;
//		min = tmp / 60;
//		sec = tmp % 60;
//	}
//	printf("%2d:%2d:%2d", hour, min, sec);
//	return 0;
//}