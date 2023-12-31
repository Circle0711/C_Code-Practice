#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float r = 0.005;//基準のデータ
	int l = 2;
	float dl = 0.0005;
	int p = 10000;
	float PI = 3.1415926535;

	float strain = dl / l;//計算式
	float s = PI * r * r;
	float stress = p / s;

	printf("丸棒の歪みは：%f\n", strain);
	printf("丸棒の応力は：%f\n", stress);

	return 0;
}