#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int fact(int a)
{
    long long int sum=1;
    for (int i = a; i > 0; i--)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%lld", fact(N));
}