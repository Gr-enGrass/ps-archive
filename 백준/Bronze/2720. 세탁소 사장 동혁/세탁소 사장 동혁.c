#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int quarter = 0, dime = 0, nickel = 0, penny = 0;
	int T, C;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &C);
		quarter = C / 25;
		dime = C % 25 / 10;
		nickel = C % 25 % 10 / 5;
		penny = C % 25 % 10 % 5 / 1;
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}
}