#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	double arr[1000] = { 0 };
	double avg = 0;
	int max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i]/max * 100;
		avg += arr[i];
	}

	printf("%lf ",avg/n);
}