#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()//���`��Υ�˥�`
{
	printf("*********************************\n");
	printf("******** 1.play 0.exit **********\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//�ܩ`�ɤ���ڻ������v��
	IntBoard(board, ROW, COL);
	//���ڤ������P��չʾ
	DisplayBoard(board,ROW,COL);
	//���`�बʼ�ޤ�
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
		printf("��`���`�΄٤�\n");
	else if (ret == 'X')
		printf("����ԥ�`���`�΄٤�\n");
	else
		printf("�����֤�\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{ 
	int input = 0;
	do 
	{
		//��˥�`��֥��ȥ�����
		menu();
		printf("�x�k�����¤�����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//���`���v��
			break;
		case 0:
			printf("�⤦�K���ޤ�����\n");
			break;
		default:
			printf("�����������ݤ��g�`���Ǥ���\n\n");
			break; 
		}
	} while (input);
	
	return 0;
}