#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= a + b + c - a || b >= a + b + c - b || c >= a + b + c - c)
    {
        int max, mid;
        if (a > b)
        {
            max = a;
            mid = b;
        }
        else
        {
            max = b;
            mid = a;
        }
        if (max < c)
        {
            mid = max;
            max = c;
        }
        else if(mid<c)
        {
            mid = c;
        }
        printf("%d", (a+b+c)-(max + mid) +(2*mid)+((a + b + c) - (max + mid)-1));
    }
    else
    {
        printf("%d", a + b + c);
    }
}