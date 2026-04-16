#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	 }
	int x=1, y=1;
	int max = arr[0][0];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}	
	}

	printf("%d\n", max);
	printf("%d %d", x + 1, y + 1);
}