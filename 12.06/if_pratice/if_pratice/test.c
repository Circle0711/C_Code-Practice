#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age = 10;
	
	if (age < 18)
		printf("未成年者です。\n");
	//else if(18<= age < 30) この書き方は違います。前の文句”18<=age”の結果はゼロです、３０よりゼロが少ないのですが、この文句は真のです。
	else if (age >= 18 && age < 30)
		printf("成年者です。\n");
	else
	{
		printf("老年者です\n");
		printf("目標のお客様です。\n");
	}
	return 0;
}