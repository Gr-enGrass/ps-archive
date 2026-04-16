#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int n;
	scanf("%d", &n);
	while (n!=0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i+1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		scanf("%d", &n);
	}
	return 0;
}