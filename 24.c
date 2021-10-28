//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//char* Judge(int num)
//{
//	if (num == 1)
//		return "yi";
//	else if (num == 2)
//		return "er";
//	else if (num == 3)
//		return "san";
//	else if (num == 4)
//		return "si";
//	else if (num == 5)
//		return "wu";
//	else if (num == 6)
//		return "liu";
//	else if (num == 7)
//		return "qi";
//	else if (num == 8)
//		return "ba";
//	else if (num == 9)
//		return "jiu";
//	else if (num == 0)
//		return "ling";
//}
//int main()
//{
//	char input[101] = { 0 };
//	for (int i = 0; i < 101; i++)
//	{
//		input[i] = getchar();
//		if (input[i] == '\n')
//		{
//			input[i] = '\0';
//			break;
//		}
//	}
//	int sz = strlen(input);
//	int re = 0;
//	int count = 0;
//	for (int j = 0; j < sz; j++)
//	{
//		int tmp = input[j] - 48;
//		re = re + tmp;
//	}
//	if (re / 100 > 0)
//	{
//		int a = re / 100;
//		printf("%s ", Judge(a));
//		int b = re / 10 - 10 * a;
//		printf("%s ", Judge(b));
//		int c = re % 100 - b * 10;
//		printf("%s", Judge(c));
//	}
//	else if (re / 10 > 0)
//	{
//		int b = re / 10;
//		printf("%s ", Judge(b));
//		int c = re - b * 10;
//		printf("%s", Judge(c));
//	}
//	else
//	{
//		printf("%s", Judge(re));
//	}
//	return 0;
//}