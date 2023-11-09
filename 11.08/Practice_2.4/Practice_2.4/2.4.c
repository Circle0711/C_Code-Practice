#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c = 0;
	printf("abc‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢‚Ü‚·F");
	scanf("%d,%d,%d", &a, &b, &c);

	float D = (b * b) - 4 * a * c;
	if (D > 0)
	{
		float x1 = (-b + sqrt(D)) / 2 * a;
		float x2 = (-b - sqrt(D)) / 2 * a;
		printf("•û’ö®‚Ì‰ğ‚ÍFx1 = %f ,x2 = %f", x1, x2);

	}
	else if (D == 0)
	{
		float x3 = -b / 2 * a;
		printf("•û’ö®‚Ì‰ğ‚ÍFx1 = x2 = %f", x3);
	}
	else
	{
		printf("•û’ö®‚Ì‰ğ‚Í•¡‘f”‚Å‚ ‚é");
	}
	return 0;

}