#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b = 0;
	float PI = 3.1415926;
	printf("��ӂ̐��la b����͂��Ă��������F");
	scanf("%f %f", &a,&b);

	float s0 = a * b;
	float s1 = PI * a *a;
	float s2 = PI * a * b;
	double S = s1 + s2;
	printf("��ӂ̒����́Fa = %f  b = %f\n", a, b);
	printf("�l�p�`�̖ʐς́Fs0 = %f\n", s0);
	printf("�~���̖ʐς́FS = %f\n",S);
	
	return 0;

}