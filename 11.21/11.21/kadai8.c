#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

// 二分探索の関数
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
            return mid; // キーが見つかったら、インデックスを返す
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

    return -1; // キーが見つからなかった場合は-1を返す
}

int main()
{
    // 変数の宣言
    int i, key, result;
    int n = 0;
    int a[5000];
    FILE* fp;
    clock_t start, end;

    // ファイルからソートされた整数配列を読み込む
    fp = fopen("int5000ao.txt", "r");
    if (fp == NULL)
    {
        printf("ファイルの読み込みは失敗しました\n");
        return 1; // エラーを返してプログラム終了
    }

    for (i = 0; i < 5000; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }
    fclose(fp);

    // ユーザーが検索するキーデータを入力する
    printf("検索したいキーデータを入力して下さい：\n");
    scanf("%d", &key);

    // 二分探査
    start = clock(); // 時間を記録
    result = binarySearch(a, 5000, key, &n);
    end = clock(); 

    if (result == -1)
    {
        printf("入力されたキーは見つかりませんでした。\n");
    }
    else
    {
        printf("入力されたキーが見つかりました、a[%d] = %d\n", result, a[result]);
    }

    printf("検索にかかった時間は%5.2lf秒です。\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("検索にかかった次数は%d次です。\n", n);

    return 0;
}
