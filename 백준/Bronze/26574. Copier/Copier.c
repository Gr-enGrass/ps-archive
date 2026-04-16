#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        printf("%d %d\n", x, x);
    }
   
    return 0;
}