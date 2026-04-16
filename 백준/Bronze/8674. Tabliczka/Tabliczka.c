#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	long long int height, width;
	scanf("%d %d", &width, &height);

	if (width%2!=0)
	{
		if (height % 2 != 0)
		{
			if (width > height)
				printf("%lld", height);
			else
				printf("%lld", width);
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("0");
	}
	return 0;
}