#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    double d,f, p,price;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &d,&f,&p);
        price = d * f*p;
        printf("$%.2lf\n", price);
    }
   
    return 0;
}