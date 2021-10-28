#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%2d ", i);
			count++;
			if (count % 5 == 0) //如果放在这个判断条件外的话，会跟着for循环进行多次判断
								//比如i=47后，它48，49，50都不是质数，
								//如果恰好此时count为一个可以被5整除的数字会连着进行多次打印\n
			{
				printf("\n");
			}
		}	
	}
	return 0;
}