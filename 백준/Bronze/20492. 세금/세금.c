#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price,price1,price2;

	scanf("%d", &price);

	price1 = price - 0.22 * price;
	price2 = price - (price * 0.2) * 0.22;

	printf("%d %d", price1, price2);
}