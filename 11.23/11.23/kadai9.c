#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//设定变量
	int i = 0, n = 5000, j,max;
	int a[5000];
	FILE* fp, * fo;

	//读取文件
	fp = fopen("int5000.txt", "r");
	for (i = 0; i < n; i++)
	{
		fscanf(fp, "%d", &a[i]);
	}
	if (a == NULL)
	{
		printf("ファイルのオープンは失敗した\n");
		return 1;
	}
	printf("ファイルの読み込みも成功した。\n");
	fclose(fp);

	//升序排列
	printf("ソートを開始します。\n");
	for (i = 0; i < n-1; i++)
	{
		
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
				
		}
	}

	//放入新文件
	fo = fopen("out5000.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(fo, "%d\n", a[i]);
	}
	fclose(fo);

	if (fp != NULL)
	{
		printf("バブルソートを完了しました。\n");
	}
	else
	{
		printf("バブルソートを失敗しました。\n");
	}
	

	return 0;
}