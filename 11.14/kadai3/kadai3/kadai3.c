#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int R1, R2, R3 ;//�ǩ`���γ���������v�������Ԥ��O������
	float E = 0;

	printf("���Ĥεֿ�R����R2��R3��늈RE���������Ƥ���������\n");//�ֿ�����늈R����������
	scanf("%d %d %d %f", &R1, &R2, &R3, &E);
	printf("�ֿ����ϣ�%d %d %d ��\n늈R�ϣ� %f V\n\n", R1, R2, R3, E);

	int Rsum1 = R1 + R2 + R3;//ֱ�л�·��Ӌ�㤷�Ƥ���
	float I = E / Rsum1;
	float E1 = R1 * I, E2 = R2 * I, E3 = R3 * I;
	printf("ֱ�л�·\n�ϳɵֿ���%d ��\n", Rsum1);
	printf("�����%f A\n", I);
	printf("�ֿ���%d %d %d ���εֿ���늈R���줾��ϣ�%f %f %f V\n\n", R1, R2, R3, E1, E2, E3);

	double Rsum2 = 1 / ((1.0 / R1) + (1.0 / R2) + (1.0 / R3));//�K�л�·��Ӌ�㤷�Ƥ���
	float I1 = E / R1, I2 = E / R2, I3 = E / R3;
	printf("�K�л�·\n�ϳɵֿ���%lf ��\n", Rsum2);
	printf("늈R��%f V\n", E);
	printf("�ֿ���%d %d %d ���εֿ���������줾��ϣ�%f %f %f V\n", R1, R2, R3, I1, I2, I3);
	return 0;
}