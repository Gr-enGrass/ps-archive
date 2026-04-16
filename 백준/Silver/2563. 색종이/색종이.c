#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int x, y;
	char arr[100][100] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	int cnt = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
				cnt++;
		}
	}
	printf("%d", cnt);
}