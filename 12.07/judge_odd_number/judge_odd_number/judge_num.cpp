#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;

	printf("��������͂��Ă��������F\n");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("���̐����͊�ł͂���܂���A�����ł��B\n");
	else
		printf("���͂��������͊�ł��B\n");

	return 0;
}