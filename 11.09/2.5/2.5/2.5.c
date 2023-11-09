#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, e, f, x1, x2 = 0;
	printf("二つの二次方程式の係数を入力してくくださいます：");
	scanf("%f,%f,%f,%f,%f,%f", &a, &b, &c, &d, &f, &e, &f);
	printf("それぞれの方程式は：%fx+%fy+%f=f(x)及び%fx+%fy+%f=f(x)\n", a, b, c, d, e, f);

	float D = (b - d) * (b - d) - 4 * a * (c - e);
	if (D > 0)
	{

		x1 = (-(b - d) + sqrt(D)) / (2 * a);
		x2 = (-(b - d) - sqrt(D)) / (2 * a);
		printf("二点で交差する、交点は%fと%f。\n", x1, x2);

	}
	else if (D == 0)
	{
		x1 = -(b - d) / (2 * a);
		printf("交点は%fです。\n", x1);

	}
	else
	{
		printf("交点はないです\n");
	}

	return 0;
}