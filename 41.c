//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//char Judge(char * str,int sz)
//{
//	int i, tmp = 0;
//	char flag;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (i == j)
//				;
//			else
//				if (str[i] == str[j])
//					count++;
//		}
//		if (count > tmp)
//			flag = str[i];
//		tmp = count;
//	}
//	return flag;
//}
//int main()
//{
//	char str[1001] = { 0 };
//	char a = '\0';
//	int i = 0;
//	while ((a = getchar()) != '\n')
//	{
//		str[i] = a;
//		i++;
//	}
//	str[i] = '\0';
//	int sz = (int)strlen(str);
//	a = Judge(str, sz);
//	printf("%c", a);
//	return 0;
//}