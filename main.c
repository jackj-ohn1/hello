#include "addition.h"

void game()
{
	//创建一个数组，用来制作棋盘。
	char board[ROW][COL] = { ' ' };
	//初始化棋盘，让棋盘上的位置没有棋子出现。
	InitBoard(board, ROW, COL);
	//打印棋盘
	BoardPrint(board, ROW, COL);
	//生成随机数
	//开始游戏
	
	while (1)
	{
		//让玩家下棋,*代表玩家下的棋。
		PlayerDo(board,ROW,COL);
		//打印下棋后的棋盘
		BoardPrint(board, ROW, COL);

		//判断输赢，返回*，代表玩家赢
		//返回#代表电脑赢
		//返回E代表平局
		//返回C代表继续
		char indication = Win(board, ROW, COL);

		//让电脑下棋，#代表电脑下的棋。
		ComputerDo(board,ROW,COL);
		//打印下棋后的棋盘
		BoardPrint(board, ROW, COL);

		//判断输赢
		indication = Win(board, ROW, COL);
		if (indication == '*')
		{
			printf("玩家赢！\n");
			break;
		}
		else if (indication == '#')
		{
			printf("电脑赢\n！");
			break;
		}
		else if (indication == 'C')
			;
		else if (indication == 'E')
		{
			printf("平局");
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
		printf("请选择！");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("输入错误！请重新输入！\n");
			break;
		}
	} while (input);
}

int main()
{
	menu();
	return 0;
}