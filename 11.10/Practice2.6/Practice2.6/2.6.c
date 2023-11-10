#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, Xmax, Ymax = 0;
	for (x = 0; x <= 6; x += 0.5)
	{
		y = pow(x, 3) - 9 * pow(x, 2) + 15 * x + 10;
		printf("x=%f,y=%f", x, y);
	}

	return 0;
}