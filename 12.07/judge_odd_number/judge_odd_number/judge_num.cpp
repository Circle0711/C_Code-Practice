#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;

	printf("数字を入力してください：\n");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("この数字は奇数ではありません、偶数です。\n");
	else
		printf("入力した数字は奇数です。\n");

	return 0;
}