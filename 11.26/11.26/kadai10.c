#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(int argc,char *argv[])
{
	int i, n, key, pos;
	int a[5000];
	clock_t start, end;
	FILE* fp;
	n = 5000;

	fp = fopen("int5000.txt", "r");
	for (i = 0; i < n; i++) fscanf(fp, "%d", &a[i]);
	fclose(fp);

	//printf("キーデータを入力して下さい 0 - 99999 \n");
	key = atoi(argv[1]);
	
	start = clock();
	pos = -1;
	for (i = 0; i < n; i++)
	{
		if (i % 10 == 0) Sleep(10);
		if (a[i] == key) pos = i;
	}
	end = clock();
	if (pos == -1) printf("入力されたキーデータはありません \n");
	else printf("入力されたキーデータがありました a[%4d] = %d \n", pos, a[pos]);
	printf("探索に要した時間は%5.2lf 秒です \n", (double)(end - start) / CLOCKS_PER_SEC);
	return 0;
}