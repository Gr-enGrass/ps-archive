#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	char str[1001] = { 0 }, str2[1001] = { 0 };
	int cnt = 0, cnt2 = 0;

	scanf("%s", str);
	scanf("%s", str2);

	for (int i = 0; i < 1001; i++)
	{
		if (str[i] == 'h')
		{
			cnt = i;
		}
		if (str2[i] == 'h')
		{
			cnt2 = i;
		}
		if (cnt != 0 && cnt2 != 0)
			break;
	}
	if (cnt >= cnt2)
	{
		printf("go");
	}
	else
	{
		printf("no");
	}
}