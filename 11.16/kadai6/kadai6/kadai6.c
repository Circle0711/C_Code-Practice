#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, j = 0, k = 0;
	int a[30], b[30], c[30];//データの初値を設定する
	FILE* fp, *fo1, *fo2;

	fp = fopen("datakadai.txt", "r");//ファイルを読み込みます
	if (fp == NULL)
	{
		printf("ファイルが読み込まれません\n");
		return 1;
	}
	for (i = 0; i < 30; i++)
	{
		fscanf(fp, "%d", &a[i]);
		if (a[i] % 2 == 0)//奇数と偶数を区別する
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

	fo1 = fopen("data_guusuu.txt", "w");//処理したデータを書き込みます
	for (i = 0; i < j; i++)
	{
		fprintf(fo1, "%d\n", b[i]);
		printf("偶数[%d] = %d\n", i, b[i]);//実行画面でデータを確認する
	}
	fclose(fo1);

	fo2 = fopen("data_kisuu.txt", "w");
	for (i = 0; i < k; i++)
	{
		fprintf(fo2, "%d\n", c[i]);
		printf("奇数[%d] = %d\n", i, c[i]);
	}
	fclose(fo2);

	

	return 0;
}