#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char str[100] = { 0 };
		int cnt = 0;

		scanf("%s", str);
		int size = strlen(str);

		for (int i = 0; i < size; i++)
		{
			
			if (str[i] != str[i - 1])
			{
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
}
