#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1)
	{
		int str[10000] = { 0 };
		int n,cnt=0,sum=0,cnt2=0;
		scanf("%d", &n);
		if (n == -1)
			break;

		while (cnt< n)
		{
			if (n % (cnt+1) == 0)
			{
				str[cnt2++] = cnt+1;
				sum += cnt + 1;
				cnt++;
			}
			else
				cnt++;
		}
		cnt = 0;
		int len = cnt2;
		if (sum/2 == n)
		{
			printf("%d =", n);
			for (int j = 0; j < len - 1; j++)
			{
				printf(" %d", str[j]);
				if (cnt++ < len-2)
					printf(" +");
			}
		}
		else
		{
			printf("%d is NOT perfect.",n);
		}
		printf("\n");
	}
	return 0;
}