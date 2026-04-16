#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[20];
    int n = 0;
    int scanfResult;

    while ((scanfResult = scanf("%19[^\n]%*c", str)) != EOF)
    {
        if (scanfResult == 1)
        {
            n++;
        }
        else
        {
            break;
        }
    }

    printf("%d", n);

    return 0;
}
