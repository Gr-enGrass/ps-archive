#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[81];
    int n,score=0, sum=0,len;
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++)
    {
        score = sum = 0;
        scanf("%s", str);
        len = strlen(str);
        for (int j = 0; j < len; j++)
        {
            if (str[j] == 'O')
            {
                score++;
                sum += score;
            }
            if (str[j] == 'X')
                score = 0;
        }
        printf("%d\n", sum);
    }
    
}