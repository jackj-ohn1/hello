#include "addition.h"

void game()
{
	//����һ�����飬�����������̡�
	char board[ROW][COL] = { ' ' };
	//��ʼ�����̣��������ϵ�λ��û�����ӳ��֡�
	InitBoard(board, ROW, COL);
	//��ӡ����
	BoardPrint(board, ROW, COL);
	//���������
	//��ʼ��Ϸ
	
	while (1)
	{
		//���������,*��������µ��塣
		PlayerDo(board,ROW,COL);
		//��ӡ����������
		BoardPrint(board, ROW, COL);

		//�ж���Ӯ������*���������Ӯ
		//����#�������Ӯ
		//����E����ƽ��
		//����C�������
		char indication = Win(board, ROW, COL);

		//�õ������壬#��������µ��塣
		ComputerDo(board,ROW,COL);
		//��ӡ����������
		BoardPrint(board, ROW, COL);

		//�ж���Ӯ
		indication = Win(board, ROW, COL);
		if (indication == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (indication == '#')
		{
			printf("����Ӯ\n��");
			break;
		}
		else if (indication == 'C')
			;
		else if (indication == 'E')
		{
			printf("ƽ��");
			break;
		}
		
	}
}

void menu()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("###################\n");
		printf("## 1.play 0.exit ##\n");
		printf("###################\n");
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	menu();
	return 0;
}