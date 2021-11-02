#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Judge(char* str, int sz)
{
	int i, count = 0;
	int a = 1, b = 1, c = 1, d = 1;
	if (sz >= 8 && sz <= 16)
	{
		for (i = 0; i < sz; i++)
		{
			if (str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '^' || str[i] == '~'|| str[i] == '!' ||str[i] == '$')
			{
				if (a > 0)
				{
					count = count + a;
					a--;
				}
			}
			if (str[i] >= '0'&&str[i] <= '9')
			{
				if (b > 0)
				{
					count = count + b;
					b--;
				}
			}
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (c > 0)
				{
					count = count + c;
					c--;
				}
			}
			if (str[i] >= 'A'&&str[i] <= 'Z')
			{
				if (d > 0)
				{
					count = count + d;
					d--;
				}
			}
		}
		if (count < 3)
			return 0;
		else
			return 1;
	}
	else
		return 0;
}

int main()
{
	int input;
	scanf("%d", &input);
	while ( input )
	{
		char a;
		char str[50] = { 0 };
		int i = 0;
		getchar();
		while ((a = getchar()) != '\n')
		{
			str[i] = a;
			i++;
		}
		str[i] = '\0';
		int sz = (int)strlen(str);
		int q = Judge(str, sz);
		if (q == 1)
			printf("°²È«ÃÜÂë£¡\n");
		else
			printf("Î£ÏÕÃÜÂë!\n");
		input--;
	}
	return 0;
}