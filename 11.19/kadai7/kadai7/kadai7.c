#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
	int i, n = 0;//変数を設定する
	int a[5000] = {0};
	int b[5000] = {0};
	clock_t start, end;
	FILE* fp = 0;
	
	fp = fopen("int5000n.txt", "r");//フィルターを上げる
	if (fp == NULL)
	{
		printf("フィルターのオープンに失敗しました");
		return 1;
	}
	start = clock();
	for (i = 0; i < 5000; i++)
	{
		fscanf(fp, "%d", &a[i]);
		if (a[i] < 0)
		{
			b[n] = a[i];//負数を選ぶ
			n++;
			if (n % 10 == 0) Sleep(10);
		}
	}
	end = clock();
	fclose(fp);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}
	printf("フィルタに負数　%d　個がある\n", n);
	printf("探索に要した時間は%.2lf 秒です \n", (double)(end - start) / CLOCKS_PER_SEC);

	
	return 0;
}