#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int pow(int x, int y)
{
	if (y == 0)
		return 1;
	int re = 1;
	for (int i = 1; i <= y; i++)
		re = re * x;
	return re;
}

int main()
{
	char arr_1[10] = { 0 };
	char arr_2[10] = { 0 };
	int a1, a2;
	long sum_1 = 0;
	long sum_2 = 0;
	int count_1 = 0;
	int count_2 = 0;
	char* p_1 = &arr_1;
	char* p_2 = &arr_2;
	scanf("%s%d%s%d", p_1, &a1, p_2, &a2);
	int sz_1 = strlen(arr_1);
	int sz_2 = strlen(arr_2);
	for (int i = 0; i < sz_1; i++)
	{
		if (arr_1[i] - 48 == a1)
		{
			count_1++;
		}
	}
	for (int i = 0; i < sz_2; i++)
	{
		if (arr_2[i] - 48 == a2)
		{
			count_2++;
		}
	}
	for (int i = count_1-1; i >=0; i--)
	{
		sum_1 = sum_1 + a1*pow(10, i);
	}
	for (int i = count_2-1; i >= 0; i--)
	{
		sum_2 = sum_2 + a2*pow(10, i);
	}
	printf("%d", sum_1 + sum_2);
	return 0;
}