#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	char* str = (char*)malloc(sizeof(char) * (n+1));

	for (int i = 0; i < n; i++)
	{
		str[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", str[i]);
		if ((i+1) % 6 == 0)
		{
			printf("Go! ");
		}
	}
	if (n % 6 != 0)
	{
		printf("Go!");
	}
	free(str);
	return 0;
}