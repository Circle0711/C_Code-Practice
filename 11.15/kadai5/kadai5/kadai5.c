#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, xmin = 0;//数値の初期値を設定する
	int i = 0;
	float ymin = 10;//ｘ＝０時の値、最小値の初期値として
	
	for (x = 0; x <= 6.1; x += 0.1)//繰り返し文
	{
		
		y = pow(x, 3) - 9 * pow(x, 2) + 15 * x + 10;
		if (y < ymin)
		{
			ymin = y;
			xmin = x;
		}
		printf("x%1d = %.2f,y%1d = %.2f\n", i, x, i, y);
		i += 1;
	}

	printf("xが%.2fの時、関数は最小値： y = %.2f\n",xmin, ymin);

	return 0;
}