#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int fisrt, second, third;

	scanf("%d %d %d", &fisrt, &second, &third);

	while (fisrt!=0&&second!=0&&third!=0)
	{

		int max;
		if (fisrt > second)
		{
			max = fisrt;
			if (max < third)
				max = third;
		}
		else
		{
			max = second;
			if (max < third)
				max = third;
		}
		if (max >= fisrt + second + third - max)
		{
			printf("Invalid\n");
		}
		else if (fisrt == second && second == third)
			printf("Equilateral\n");
		else if (fisrt == second || fisrt == third || second == third)
			printf("Isosceles\n");
		else
			printf("Scalene\n");
		scanf("%d %d %d", &fisrt, &second, &third);
	}
}