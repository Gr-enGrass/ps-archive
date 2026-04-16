#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t, s;
    scanf("%d %d", &t, &s);
    if (t >= 12 && t <= 16)
    {
        if (s > 0)
        {
            printf("280");
        }
        else
            printf("320");
    }
    else
    {
        printf("280");
    }
}