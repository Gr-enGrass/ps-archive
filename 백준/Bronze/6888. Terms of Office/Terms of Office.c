#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int year_start, year_end;

	scanf("%d", &year_start);
	scanf("%d", &year_end);
	int sum = 60;

	printf("All positions change in year %d\n", year_start);

	while (year_start+sum<=year_end)
	{
		printf("All positions change in year %d\n",year_start+sum);
		sum += 60;
	}
	return 0;
}