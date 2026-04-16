#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float D;
	char grade[3];

	scanf("%s", grade);

	switch (grade[0])
	{
	case 'A':
		D = 4.0;
		break;
	case 'B':
		D = 3.0;
		break;
	case 'C':
		D = 2.0;
		break;
	case 'D':
		D = 1.0;
		break;
	default:
		D = 0.0;
		break;
	}
	switch (grade[1])
	{
	case '+':
		D += 0.3;
		break;
	case'-':
		D -= 0.3;
		break;
	default:
		break;
	}

	printf("%.1f", D);
}