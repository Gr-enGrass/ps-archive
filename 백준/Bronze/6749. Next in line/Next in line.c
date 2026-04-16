#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int second, third;
    scanf("%d", &third);
    scanf("%d", &second);

    printf("%d", second - third + second);
}