#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float r = 0.005;//��̃f�[�^
	int l = 2;
	float dl = 0.0005;
	int p = 10000;
	float PI = 3.1415926535;

	float strain = dl / l;//�v�Z��
	float s = PI * r * r;
	float stress = p / s;

	printf("�ۖ_�̘c�݂́F%f\n", strain);
	printf("�ۖ_�̉��͂́F%f\n", stress);

	return 0;
}