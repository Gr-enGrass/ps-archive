#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	

int main()
{
	double tile;
	scanf("%lf", &tile);

	printf("The largest square has side length %d.", (int)(sqrt(tile)));

}