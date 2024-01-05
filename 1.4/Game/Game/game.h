#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

//设置形参
#define ROW 3
#define COL 3

//初始化棋盘
void IntBoard(char board[3][3], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//输赢判断
char IsWin(char board[ROW][COL],int row,int col);