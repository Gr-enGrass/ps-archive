#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int N,cnt;
    scanf("%d", &N);
    cnt = N;
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", cnt--);
    }
}