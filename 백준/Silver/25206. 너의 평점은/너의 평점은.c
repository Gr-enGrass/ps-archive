#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	double avg,sum=0,avg_sum=0;
	double class;
	for (int i = 0; i < 20; i++)
	{
		char sub[51], grade[3];
		double score;
		scanf("%s %lf %s", sub, &score, grade);
		getchar();
		if (grade[0] == 'P')
		{
			continue;
		}
		if (grade[0] == 'A')
		{
			if (grade[1] == '+')
				class = 4.5;
			if (grade[1] == '0')
			class = 4.0;
		}
		else if (grade[0] == 'B')
		{
			if (grade[1] == '+')
				class = 3.5;
			if (grade[1] == '0')
			class = 3.0;
		}
		else if (grade[0] == 'C')
		{
			if (grade[1] == '+')
				class = 2.5;
			if (grade[1] == '0')
			class = 2.0;
		}
		else if (grade[0] == 'D')
		{
			if (grade[1] == '+')
				class = 1.5;
			if (grade[1] == '0')
			class = 1.0;
		}
		else
			class = 0.0;

		sum += score * class;
		avg_sum += score;
	}
	avg = sum / avg_sum;
	printf("%f", avg);
}