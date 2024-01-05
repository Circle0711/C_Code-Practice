#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()//ゲームのメニュー
{
	printf("*********************************\n");
	printf("******** 1.play 0.exit **********\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//ボードを初期化する関数
	IntBoard(board, ROW, COL);
	//初期した碁盤の展示
	DisplayBoard(board,ROW,COL);
	//ゲームが始まる
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL);
	}
	if (ret == 'O')
		printf("ユーザーの勝ち\n");
	else if (ret == 'X')
		printf("コンピューターの勝ち\n");
	else
		printf("引き分け\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{ 
	int input = 0;
	do 
	{
		//メニューをブリントアウト
		menu();
		printf("選択して下さい：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ゲーム関数
			break;
		case 0:
			printf("もう終わりました。\n");
			break;
		default:
			printf("入力した内容は間違いです。\n\n");
			break; 
		}
	} while (input);
	
	return 0;
}