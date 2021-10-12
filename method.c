#include "addition.h"



void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void BoardPrint(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			printf("%c", board[i][j]);
			if (j < col - 1)
				printf(" |");
		}
		printf("\n");
		if (i < row - 1)
			for (j=0;j<col;j++)
			{
				printf("---");
			}
		printf("\n");
	}
}

void PlayerDo(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	//检验输入的坐标的合理性
	while(1)
	{
		printf("请输入坐标：(行，列)");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
				printf("该坐标已被占用，请重新选择！");
		}
	}

}

void ComputerDo(char board[ROW][COL],int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
}

char Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[j][1] != ' ')
			return board[1][j];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[1][1];

	if (board[0][3] == board[1][1] && board[1][1] == board[0][3])
		return board[1][1];


	if (1 == Full(board, row, col))
	{
		return 'C';
	}
	else
	{
		return 'E';
	}
}

int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;//碰到return就会退出函数
			}
			
		}
	}
	return 0;
}




