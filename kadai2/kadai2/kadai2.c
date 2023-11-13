#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 87, j = 4657, k = 5, m = 999;
	double x = 3.14159265358979, y = 0.0012345, z = 2.71828182846;
	printf("%4d%5d\n", i, j);
	printf("%04d %04d\n", k, m);
	printf(" %4.2f %9.2e %6.4f", x, y, z);
	return 0;
}