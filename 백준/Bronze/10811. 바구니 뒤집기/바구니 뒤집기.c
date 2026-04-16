#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j;
    int* arr;
    int temp;

    scanf("%d %d", &N, &M);
    arr = (int*)malloc(sizeof(int) * (N+1));

    for (int k = 1; k <= N; ++k)
    {
        arr[k] = k;
    }

    for (int l = 0; l < M; ++l)
    {
        scanf("%d %d", &i, &j);
        for (int n = i; n <= (i+j)/2; ++n)
        {
            temp = arr[n];
            arr[n] = arr[j-(n-i)];
            arr[j-(n-i)] = temp;
        }
    }

    for (int m = 1; m <= N; ++m)
    {
        printf("%d ", arr[m]);
    }
    free(arr);

    return 0;
}