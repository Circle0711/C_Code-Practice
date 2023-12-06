#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
	int i, n = 0;//�������O������
	int a[5000] = {0};
	int b[5000] = {0};
	clock_t start, end;
	FILE* fp = 0;
	
	fp = fopen("int5000n.txt", "r");//�ե��륿�`���Ϥ���
	if (fp == NULL)
	{
		printf("�ե��륿�`�Υ��`�ץ��ʧ�����ޤ���");
		return 1;
	}
	start = clock();
	for (i = 0; i < 5000; i++)
	{
		fscanf(fp, "%d", &a[i]);
		if (a[i] < 0)
		{
			b[n] = a[i];//ؓ�����x��
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
	printf("�ե��륿��ؓ����%d����������\n", n);
	printf("̽����Ҫ�����r�g��%.2lf ��Ǥ� \n", (double)(end - start) / CLOCKS_PER_SEC);

	
	return 0;
}