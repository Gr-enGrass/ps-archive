#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int num[1001];
	int temp;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf(" %d", &num[i]);
	}
	for (int i = 1;i < n;i++)
	{
		for (int j = 0;j < n - i;j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < n;i++) {
		printf("%d\n", num[i]);
	}
}