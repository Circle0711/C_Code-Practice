#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char myChar = 'c';
	int asciiValue = myChar;
	printf("%d\n", asciiValue);

	int day = 0;
	printf("数字を入力してください\n");
	scanf("%d", &day);

	switch (day)
	{
	case 'c':
		printf("文字も出来ました。\n");
		break;
	default:
		printf("他のものを入力した\n");
		break;

	}


	return 0;
}