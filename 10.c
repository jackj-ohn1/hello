//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int scores[50][5];
//	int col, row;//row Ϊѧ������ ��colΪ��Ŀ����
//	int score[5];
//	int i = 0;
//	int j = 0;
//	float stu[50] = { 0.0 };
//	float sub[5] = { 0.0 };
//	int count = 0;
//	
//
//	while (scanf("%d %d", &row, &col) != EOF && col <= 50 && row <= 5)
//	{
//		for (i = 0; i < row; i++)//��ÿλѧ���ĳɼ�����һ��һά���飬���ڶ�ά������
//		{
//			for (j = 0; j < col; j++)
//			{
//				scanf("%d", &score[j]);
//				scores[i][j] = score[j];
//			}
//		}
//
//		for (i = 0; i < row; i++)//�Գɼ������������ƽ��
//		{
//			float sum = 0.0;
//			float tmp = 0.0;
//			for (j = 0; j < col; j++)
//			{
//				sum = sum + scores[i][j];
//				tmp = tmp + scores[j][i];
//			}
//			stu[i] = sum / col;
//			if (i < 5)
//			{
//				sub[i] = tmp / row;
//			}
//		}
//
//		for (i = 0; i < row; i++)//�ж�Ŀ��ѧ������
//		{
//			int flag = 1;
//			for (j = 0; j < col; j++)
//			{
//				if (scores[i][j] < sub[j])
//				{
//					flag = 0;
//				}
//			}
//			if (flag==1)
//			{
//				count++;
//			}
//		}
//		for (i = 0; i < row; i++)//��ӡƽ���ɼ�
//		{
//			printf("%.2f ", stu[i]);
//		}
//		printf("\n");
//		for (i = 0; i < col; i++)
//		{
//			printf("%.2f ", sub[i]);
//		}
//		printf("\n");
//		printf("%d", count);
//
//	}
//	return 0;
//}