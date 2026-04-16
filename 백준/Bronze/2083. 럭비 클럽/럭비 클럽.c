#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[11];
	int age, weight,cnt;
	scanf("%s %d %d", name, &age, &weight);
	while (name[0] != '#')
	{
		if (age > 17 || weight >= 80)
			cnt = 1;
		else
			cnt = 0;
		cnt == 0 ? printf("%s Junior\n", name) : printf("%s Senior\n", name);
		scanf("%s %d %d", name, &age, &weight);
	}
	return 0;
}
