#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age = 10;
	
	if (age < 18)
		printf("�����N�҂ł��B\n");
	//else if(18<= age < 30) ���̏������͈Ⴂ�܂��B�O�̕���h18<=age�h�̌��ʂ̓[���ł��A�R�O���[�������Ȃ��̂ł����A���̕���͐^�̂ł��B
	else if (age >= 18 && age < 30)
		printf("���N�҂ł��B\n");
	else
	{
		printf("�V�N�҂ł�\n");
		printf("�ڕW�̂��q�l�ł��B\n");
	}
	return 0;
}