#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10], remain[10],i=0,result=0;

	while (i<10)
	{
		scanf("%d", &num[i]);
		++i;
	}
	for (int j = 0; j < 10; ++j)
	{
		remain[j] = num[j] % 42;
	}
	for (int k = 0; k < 10; ++k)
	{
		int cun = 0;
		for (int l = k + 1; l < 10;++l) 
		{
			if (remain[k] == remain[l])
				++cun;
		}
		if (cun == 0)
			++result;
	}
	printf("%d", result);
	return 0;
}