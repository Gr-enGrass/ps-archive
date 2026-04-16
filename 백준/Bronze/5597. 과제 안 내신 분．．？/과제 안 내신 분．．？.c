#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int stu[31] = { 0 }, num;

	for (int i = 0; i < 28; ++i)
	{
		scanf("%d", &num);
		stu[num] = num;
	}
	for (int j = 1; j < 31; ++j)
	{
		if (stu[j] != j)
			printf("%d\n", j);
	}
	return 0;
}