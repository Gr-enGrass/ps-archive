#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n,n2;
	int sum = 0;
	int cnt = 1;
	int cnt2 = 0;
	int i = 0;
	scanf("%d", &n);
	int rn = n;
	while (1)
	{
		if (n / 10 == 0)
		{
			break;
		}
		n = n / 10;
		cnt++;
	}
	
	int start = rn - 9 * cnt;
	for (i = start; i <= rn; i++)
	{
		n2 = i;
		for (int j = 0; j < cnt; j++)
		{
			sum = sum + (n2 % 10);
			n2 /= 10;
		}
		if (sum + i == rn)
		{
			cnt2++;
			break;
		}
		sum = 0;
	}

	if (cnt2 == 0)
	{
		printf("0");
		return 0;
	}
	else
	{
		printf("%d", i);
	}
}