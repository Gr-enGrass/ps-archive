#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int n;
    int prime_number,cnt=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num_cnt = 0;
        scanf("%d", &prime_number);
        for (int j = 1; j <= prime_number; j++)
        {
            if (prime_number % j == 0)
                num_cnt++;
        }
        if (num_cnt == 2)
            cnt++;
    }
    printf("%d", cnt);
}