#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, e, f, x1, x2 = 0;
	printf("��̓񎟕������̌W������͂��Ă����������܂��F");
	scanf("%f,%f,%f,%f,%f,%f", &a, &b, &c, &d, &f, &e, &f);
	printf("���ꂼ��̕������́F%fx+%fy+%f=f(x)�y��%fx+%fy+%f=f(x)\n", a, b, c, d, e, f);

	float D = (b - d) * (b - d) - 4 * a * (c - e);
	if (D > 0)
	{

		x1 = (-(b - d) + sqrt(D)) / (2 * a);
		x2 = (-(b - d) - sqrt(D)) / (2 * a);
		printf("��_�Ō�������A��_��%f��%f�B\n", x1, x2);

	}
	else if (D == 0)
	{
		x1 = -(b - d) / (2 * a);
		printf("��_��%f�ł��B\n", x1);

	}
	else
	{
		printf("��_�͂Ȃ��ł�\n");
	}

	return 0;
}