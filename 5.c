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
			if (count % 5 == 0) //�����������ж�������Ļ��������forѭ�����ж���ж�
								//����i=47����48��49��50������������
								//���ǡ�ô�ʱcountΪһ�����Ա�5���������ֻ����Ž��ж�δ�ӡ\n
			{
				printf("\n");
			}
		}	
	}
	return 0;
}