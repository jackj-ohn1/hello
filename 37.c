#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Stu
{
	char ID[17];
	int try;
	int actual;
};
int main()
{
	int input, i, col, j;
	struct Stu stu[1000] = { 0 };
	int tmp[1000] = { 0 };
	scanf("%d", &col);
	for (i = 0; i < col; i++)
	{
		scanf("%s %d %d", &stu[i].ID, &stu[i].try, &stu[i].actual);
	}
	scanf("%d", &input);
	for (i = 0; i < input; i++)
	{
		scanf("%d", &tmp[i]);
	}
	for (j = 0; j < input; j++)
	{
		for (i = 0; i < col; i++)
		{
			if (stu[i].try == tmp[j])
			{
				printf("%s %d", stu[i].ID, stu[i].actual);
			}
		}
		if (j < input - 1)
			printf("\n");
	}

	return 0;
}