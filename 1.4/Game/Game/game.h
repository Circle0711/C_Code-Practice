#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

//�����β�
#define ROW 3
#define COL 3

//��ʼ������
void IntBoard(char board[3][3], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//��Ӯ�ж�
char IsWin(char board[ROW][COL],int row,int col);