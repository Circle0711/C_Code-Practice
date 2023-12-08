#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char myChar = 'c';
	int asciiValue = myChar;
	printf("%d\n", asciiValue);

	int day = 0;
	printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &day);

	switch (day)
	{
	case 'c':
		printf("•¶š‚ào—ˆ‚Ü‚µ‚½B\n");
		break;
	default:
		printf("‘¼‚Ì‚à‚Ì‚ğ“ü—Í‚µ‚½\n");
		break;

	}


	return 0;
}