#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int fisrt_degree, second_degree, third_degree;
	scanf("%d", &fisrt_degree);
	scanf("%d", &second_degree);
	scanf("%d", &third_degree);

	int sum = fisrt_degree + second_degree + third_degree;

	if (sum == 180)
	{
		if (fisrt_degree == 60&&second_degree==60)
		{
			printf("Equilateral");
		}
		else if (fisrt_degree == second_degree || fisrt_degree == third_degree || third_degree == second_degree)
		{
			printf("Isosceles");
		}
		else
		{
			printf("Scalene");
		}
	}
	else
	{
		printf("Error");
	}
}