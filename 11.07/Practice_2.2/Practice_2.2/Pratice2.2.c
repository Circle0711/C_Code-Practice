#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c = 0;
	printf("�O�p�`�̒�������͂��Ă��������F");
	scanf("%d %d %d", &a, &b, &c);
	float p = (a + b + c) / 2;
	float s = p * (p - a) * (p - b) * (p - c);
	s = sqrt(s);
	printf("�O�p�`�̖ʐς́FS = %f", s);

	return 0;

}