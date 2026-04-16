#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, price, large;

	scanf("%d %d %d", &a, &b, &c);
	if (a == b && a == c && b == c)
		price = 10000 + ((a + b + c) / 3) * 1000;
	else if (a == b || a == c || b == c)
	{
		if (a == b)
			price = 1000 + ((a + b) / 2) * 100;
		if (a == c)
			price = 1000 + ((a + c) / 2) * 100;
		if (c == b)
			price = 1000 + ((c + b) / 2) * 100;
	}
	else
	{
		large = a;
		if (b > large){
			if (c > b)
				large = c;
			else large = b;
		}
		else {
			if (c > a)
				large = c;
			else large = a;
		}
		price = 100 * large;
	}
	printf("%d", price);
	return 0;
}