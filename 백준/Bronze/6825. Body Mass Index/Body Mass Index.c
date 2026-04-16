#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight, height,bmi;

	scanf("%lf", &weight);
	scanf("%lf", &height);

	bmi = weight / (height * height);
	if (bmi > 25)
		printf("Overweight");
	else if (bmi >= 18.5)
		printf("Normal weight");
	else
		printf("Underweight");
}