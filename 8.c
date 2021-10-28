#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	int scores[100] = { 0 };
	int i = 0;
	int tmp = 0;
	int sum = 0;
	while (scanf("%d", &input) != EOF && input <= 100 && input > 2)
	{
		for (i = 0; i < input; i++)
		{
			scanf("%d", &scores[i]);
		}
		for (i = 0; i < input-1; i++)
		{
			for (int j = i+1; j < input; j++)
			{
				if (scores[i] < scores[j])
				{
					tmp = scores[i];
					scores[i] = scores[j];
					scores[j] = tmp;
				}
			}
		}
		scores[0] = 0;
		scores[input - 1] = 0;
		for (i = 0; i < input; i++)
		{
			sum = sum + scores[i];
		}
		float re = sum / (input - 2);
		printf("%.2f\n", re);
		
	}
	return 0;
}