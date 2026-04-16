#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[161] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int r = 0;
		scanf("%d", &r);
		scanf("%s", arr);
		int size = strlen(arr);
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < r; k++)
			{
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}
}