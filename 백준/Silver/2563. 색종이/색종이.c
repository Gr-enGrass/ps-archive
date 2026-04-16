#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cnt = 0;
	int n;
	scanf("%d", &n);
	int arr[100][100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		for (int k = x - 1; k < x+9; k++)
		{
			for (int j = y - 1; j < y+9; j++)
			{
				arr[k][j] = 1;
			}
		}
	}
	for (int l = 0; l < 100; l++)
	{
		for (int m = 0; m < 100; m++)
		{
			if (arr[l][m] == 1)
			{
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}