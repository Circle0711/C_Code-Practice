#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int price = 0;
	printf("�艿����͂��Ă��������F");//���i����͂��܂��B
	scanf("%d", &price);

	if (price >= 10000)//���i�̐��l���͂������ʂ���
	{
		int fprice = price - 1000;
		printf("�̔��̉��i�́F%d�@�~", fprice);
	}
	else if (price >= 1000)
	{
		int fprice = price - 100;
		printf("�̔��̉��i�́F%d�@�~", fprice);
	}
	else
	{
		printf("�̔��̉��i�́F0�@�~");
	}

	return 0;
}