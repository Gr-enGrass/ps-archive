#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <stdlib.h>


int main() 
{
    
    int k;
    scanf("%d", &k);
    int *stack = (int*)calloc(k,sizeof(int));
    int sum = 0;
    int top = -1;
    int check;

    for (int i = 0;i < k;i++)
    {
        scanf("%d", &check);

        if (check == 0)
        {
            stack[top--] = 0;
            continue;
        }
        top++;
        stack[top] = check;       
    }

    for (int j = 0;j <= top;j++)
    {
        sum += stack[j];
    }

    printf("%d", sum);
    free(stack);
}
