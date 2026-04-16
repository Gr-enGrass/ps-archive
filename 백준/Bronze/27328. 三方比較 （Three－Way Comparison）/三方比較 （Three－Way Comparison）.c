#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b)
        printf("-1");
    else if (a > b)
        printf("1");
    else
        printf("0");  
}