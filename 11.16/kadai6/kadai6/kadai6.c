#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, j = 0, k = 0;
	int a[30], b[30], c[30];//�ǩ`���γ������O������
	FILE* fp, *fo1, *fo2;

	fp = fopen("datakadai.txt", "r");//�ե�������i���z�ߤޤ�
	if (fp == NULL)
	{
		printf("�ե����뤬�i���z�ޤ�ޤ���\n");
		return 1;
	}
	for (i = 0; i < 30; i++)
	{
		fscanf(fp, "%d", &a[i]);
		if (a[i] % 2 == 0)//������ż�������e����
		{
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
	}
	fclose(fp);

	fo1 = fopen("data_guusuu.txt", "w");//�I�����ǩ`��������z�ߤޤ�
	for (i = 0; i < j; i++)
	{
		fprintf(fo1, "%d\n", b[i]);
		printf("ż��[%d] = %d\n", i, b[i]);//�g�л���ǥǩ`����_�J����
	}
	fclose(fo1);

	fo2 = fopen("data_kisuu.txt", "w");
	for (i = 0; i < k; i++)
	{
		fprintf(fo2, "%d\n", c[i]);
		printf("����[%d] = %d\n", i, c[i]);
	}
	fclose(fo2);

	

	return 0;
}