#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[5];
	scanf("%s", str);

	switch (str[0])
	{
	case 'N':
		printf("North London Collegiate School");
		break;
	case'B':
		printf("Branksome Hall Asia");
		break;
	case'K':
		printf("Korea International School");
		break;
	default:
		printf("St. Johnsbury Academy");
		break;
	}
}