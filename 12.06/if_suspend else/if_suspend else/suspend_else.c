#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;

	if (0 == 3)
		if (2 == b)
			printf("おはようございます。\n");
		else
			printf("こんばんは\n");
	printf("lol");
	//elseが、一番近いifと一緒にです

	return 0;
}