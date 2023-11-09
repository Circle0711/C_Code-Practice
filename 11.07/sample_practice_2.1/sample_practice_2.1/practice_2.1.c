#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b = 0;
	float PI = 3.1415926;
	printf("二辺の数値a bを入力してください：");
	scanf("%f %f", &a,&b);

	float s0 = a * b;
	float s1 = PI * a *a;
	float s2 = PI * a * b;
	double S = s1 + s2;
	printf("二辺の長さは：a = %f  b = %f\n", a, b);
	printf("四角形の面積は：s0 = %f\n", s0);
	printf("円錐の面積は：S = %f\n",S);
	
	return 0;

}