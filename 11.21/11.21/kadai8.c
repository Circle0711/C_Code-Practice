#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

// ����̽�����v��
int binarySearch(int arr[], int size, int key,int *n)
{
    int low = 0;
    int high = size - 1;
   

    while (low <= high)
    {
        (*n)++;
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid; // ���`��Ҋ�Ĥ��ä��顢����ǥå����򷵤�
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        if ((*n) % 10 == 0)
        {
            Sleep(10);
        }
    }

    return -1; // ���`��Ҋ�Ĥ���ʤ��ä����Ϥ�-1�򷵤�
}

int main()
{
    // ����������
    int i, key, result;
    int n = 0;
    int a[5000];
    FILE* fp;
    clock_t start, end;

    // �ե����뤫�饽�`�Ȥ��줿�������Ф��i���z��
    fp = fopen("int5000ao.txt", "r");
    if (fp == NULL)
    {
        printf("�ե�������i���z�ߤ�ʧ�����ޤ���\n");
        return 1; // ����`�򷵤��ƥץ����K��
    }

    for (i = 0; i < 5000; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }
    fclose(fp);

    // ��`���`���������륭�`�ǩ`������������
    printf("�������������`�ǩ`�������������¤�����\n");
    scanf("%d", &key);

    // ����̽��
    start = clock(); // �r�g��ӛ�h
    result = binarySearch(a, 5000, key, &n);
    end = clock(); 

    if (result == -1)
    {
        printf("�������줿���`��Ҋ�Ĥ���ޤ���Ǥ�����\n");
    }
    else
    {
        printf("�������줿���`��Ҋ�Ĥ���ޤ�����a[%d] = %d\n", result, a[result]);
    }

    printf("�����ˤ����ä��r�g��%5.2lf��Ǥ���\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("�����ˤ����ä�������%d�ΤǤ���\n", n);

    return 0;
}
