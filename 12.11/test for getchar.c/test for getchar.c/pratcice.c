#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//暗号の入力
	char password[20] = { 0 };
	printf("暗号を入力してください：");
	scanf("%19s", password);

	//キャッシュクリア
	int ch = 0;
	while ((ch = getchar()) != "\n" && ch != EOF)
	{
		;
	}

	//つつく
	printf("ダブルチェック（Y・N）\n");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("問題ではありませ。\n");
	}
	else
	{
		printf("問題があります。\n");
	}

	return 0;
}