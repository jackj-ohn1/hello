//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int judge(char arr[], int b,int sz)
//{
//	int count = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		int a = arr[i]-48;
//		if (b== a)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	for (int i = 0; i < 1000; i++)
//	{
//		arr[i] = getchar();
//		if (arr[i] == '\n')
//		{
//			arr[i] = '\0';
//			break;
//		}
//	}
//	int sz = strlen(arr);
//	int count = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		if (judge(arr, j, sz) != 0)
//		{
//			count++;
//		}
//	}
//	for (int j = 0; j < 10; j++)//虽然解决了无空行问题，但多进行了10次调用，会导致内存消耗过大
//	{
//		if (judge(arr, j, sz) != 0)
//		{
//			count--;
//			if (count >= 1)
//				printf("%d:%d\n", j, judge(arr, j, sz));
//			else
//				printf("%d:%d", j, judge(arr, j, sz));
//		}
//	}	
//	return 0;
//}