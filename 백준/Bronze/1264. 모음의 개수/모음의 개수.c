#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[256];
	
	scanf("%[^\n]s", str);
	while (str[0] != '#')
	{
		int cnt = 0;
		int size = strlen(str);
		for (int i = 0; i < size; i++)
		{
			if (str[i] >= 65 && str[i] <= 96)
				str[i] += 32;
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				cnt++;
		}
		printf("%d\n", cnt);
		getchar();
		scanf("%[^\n]s", str);
	}
}
