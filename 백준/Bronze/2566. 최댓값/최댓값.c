#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[9][9] = { 0 };
	int max = 0;
	int x, y;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (max <= arr[i][j])
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", x+1, y+1);
}