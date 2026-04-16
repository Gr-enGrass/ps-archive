#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    int i, j;

    int* arr;
    scanf("%d %d", &N, &M);
    arr = (int*)malloc(sizeof(int) * N);

    for (i = 0; i < N; ++i)
        arr[i] = i + 1;

    int temp;

    for (int I = 0; I < M; ++I)
    {
        scanf("%d %d", &i, &j);

        for (int K = 0; K < 1; ++K)
        {
            temp = arr[i-1];
            arr[i-1] = arr[j-1];
            arr[j-1] = temp;
        }
    }

    for (int i = 0; i < N; ++i)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}