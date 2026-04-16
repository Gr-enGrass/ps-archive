#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n, m;
	int card[100];
	int num,max=0;
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
	for (int j = 0; j < n-2; j++)
	{
		for (int k = j+1; k < n-1; k++)
		{
			for (int l = k+1; l <n; l++)
			{
				num = card[j] + card[k] + card[l];
				if (m >= num && max < num)
				{
					max = num;
				}
			}
		}
	}
	printf("%d", max);
}