#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, xmin = 0;//���l�̏����l��ݒ肷��
	int i = 0;
	float ymin = 10;//�����O���̒l�A�ŏ��l�̏����l�Ƃ���
	
	for (x = 0; x <= 6.1; x += 0.1)//�J��Ԃ���
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

	printf("x��%.2f�̎��A�֐��͍ŏ��l�F y = %.2f\n",xmin, ymin);

	return 0;
}