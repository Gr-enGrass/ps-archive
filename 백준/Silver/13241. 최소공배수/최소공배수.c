#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld\n", lcm(a, b));

    return 0;
}