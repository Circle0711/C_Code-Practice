#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char myChar = 'c';
	int asciiValue = myChar;
	printf("%d\n", asciiValue);

	int day = 0;
	printf("��������͂��Ă�������\n");
	scanf("%d", &day);

	switch (day)
	{
	case 'c':
		printf("�������o���܂����B\n");
		break;
	default:
		printf("���̂��̂���͂���\n");
		break;

	}


	return 0;
}