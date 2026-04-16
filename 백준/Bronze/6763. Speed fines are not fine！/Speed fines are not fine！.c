#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b,price;
	scanf("%d", &a);
	scanf("%d", &b);

	if (b > a)
	{
		b -=a;
		if (b <= 20)
			price = 100;
		else if (b <= 30)
			price = 270;
		else
			price = 500;

		printf("You are speeding and your fine is $%d.", price);
	}
	else
		printf("Congratulations, you are within the speed limit!");
}