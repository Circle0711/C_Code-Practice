#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int price = 0;
	printf("定価を入力してください：");//価格を入力します。
	scanf("%d", &price);

	if (price >= 10000)//価格の数値をはっきり区別する
	{
		int fprice = price - 1000;
		printf("販売の価格は：%d　円", fprice);
	}
	else if (price >= 1000)
	{
		int fprice = price - 100;
		printf("販売の価格は：%d　円", fprice);
	}
	else
	{
		printf("販売の価格は：0　円");
	}

	return 0;
}