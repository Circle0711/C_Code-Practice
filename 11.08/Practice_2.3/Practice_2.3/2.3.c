#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float r = 0.005;//Šî€‚Ìƒf[ƒ^
	int l = 2;
	float dl = 0.0005;
	int p = 10000;
	float PI = 3.1415926535;

	float strain = dl / l;//ŒvZ®
	float s = PI * r * r;
	float stress = p / s;

	printf("ŠÛ–_‚Ì˜c‚İ‚ÍF%f\n", strain);
	printf("ŠÛ–_‚Ì‰—Í‚ÍF%f\n", stress);

	return 0;
}