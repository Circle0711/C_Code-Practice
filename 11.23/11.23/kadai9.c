#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//�趨����
	int i = 0, n = 5000, j,max;
	int a[5000];
	FILE* fp, * fo;

	//��ȡ�ļ�
	fp = fopen("int5000.txt", "r");
	for (i = 0; i < n; i++)
	{
		fscanf(fp, "%d", &a[i]);
	}
	if (a == NULL)
	{
		printf("�ե�����Υ��`�ץ��ʧ������\n");
		return 1;
	}
	printf("�ե�������i���z�ߤ�ɹ�������\n");
	fclose(fp);

	//��������
	printf("���`�Ȥ��_ʼ���ޤ���\n");
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

	//�������ļ�
	fo = fopen("out5000.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(fo, "%d\n", a[i]);
	}
	fclose(fo);

	if (fp != NULL)
	{
		printf("�Х֥륽�`�Ȥ����ˤ��ޤ�����\n");
	}
	else
	{
		printf("�Х֥륽�`�Ȥ�ʧ�����ޤ�����\n");
	}
	

	return 0;
}