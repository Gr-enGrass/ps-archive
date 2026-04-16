#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int bugger_high, bugger_middle, bugger_low,coke,soda;
	int high_coke, middle_coke, low_coke, high_soda, middle_soda, low_soda;
	int cheapest = 10000;
	scanf("%d", &bugger_high);
	scanf("%d", &bugger_middle);
	scanf("%d", &bugger_low);
	scanf("%d", &coke);
	scanf("%d", &soda);

	high_coke = bugger_high + coke - 50;
	middle_coke = bugger_middle + coke - 50;
	low_coke = bugger_low + coke - 50;
	high_soda = bugger_high + soda - 50;
	middle_soda = bugger_middle + soda - 50;
	low_soda = bugger_low + soda - 50;

	if (high_coke < cheapest)
	{
		cheapest = high_coke;
	}
	if (middle_coke < cheapest)
	{
		cheapest = middle_coke;
	}
	if (low_coke < cheapest)
	{
		cheapest = low_coke;
	}
	if (high_soda < cheapest)
	{
		cheapest = high_soda;
	}
	if (middle_soda < cheapest)
	{
		cheapest = middle_soda;
	}
	if (low_soda < cheapest)
	{
		cheapest = low_soda;
	}
	printf("%d", cheapest);
}
