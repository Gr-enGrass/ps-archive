#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NUM 10001

int main() {
	int n;
	int numsort[10001] = { 0 };
	int num;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		numsort[num]++;
	}

	for (int j = 0; j < MAX_NUM; j++)
	{
		for (int k = 0; k < numsort[j]; k++)
		{
			printf("%d\n", j);
		}		
	}
	return 0;
}