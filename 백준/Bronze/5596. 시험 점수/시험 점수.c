#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int sum_S=0, sum_T=0, ex;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &ex);
		sum_S += ex;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &ex);
		sum_T += ex;
	}
	printf("%d", sum_S >= sum_T ? sum_S : sum_T);
}
