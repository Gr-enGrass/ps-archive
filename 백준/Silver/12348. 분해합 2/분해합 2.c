#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	long long int n,n2;
	long long int sum = 0;
	int cnt = 1;
	int cnt2 = 0;
	long long int i = 0;
	scanf("%lld", &n);
	long long int rn = n;
	while (1)
	{
		if (n / 10 == 0)
		{
			break;
		}
		n = n / 10;
		cnt++;
	}
	
	 long long int start = rn - 9 * cnt;
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
		printf("%lld", i);
	}
}