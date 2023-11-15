#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int R1, R2, R3 ;//データの初値と予め関数の宣言を設定する
	float E = 0;

	printf("三つの抵抗R１、R2、R3と電圧Eを入力してください：\n");//抵抗値と電圧を入力する
	scanf("%d %d %d %f", &R1, &R2, &R3, &E);
	printf("抵抗値は：%d %d %d Ω\n電圧は： %f V\n\n", R1, R2, R3, E);

	int Rsum1 = R1 + R2 + R3;//直列回路を計算している
	float I = E / Rsum1;
	float E1 = R1 * I, E2 = R2 * I, E3 = R3 * I;
	printf("直列回路\n合成抵抗：%d Ω\n", Rsum1);
	printf("電流：%f A\n", I);
	printf("抵抗は%d %d %d Ωの抵抗の電圧それぞれは：%f %f %f V\n\n", R1, R2, R3, E1, E2, E3);

	double Rsum2 = 1 / ((1.0 / R1) + (1.0 / R2) + (1.0 / R3));//並列回路を計算している
	float I1 = E / R1, I2 = E / R2, I3 = E / R3;
	printf("並列回路\n合成抵抗：%lf Ω\n", Rsum2);
	printf("電圧：%f V\n", E);
	printf("抵抗は%d %d %d Ωの抵抗の電流それぞれは：%f %f %f V\n", R1, R2, R3, I1, I2, I3);
	return 0;
}