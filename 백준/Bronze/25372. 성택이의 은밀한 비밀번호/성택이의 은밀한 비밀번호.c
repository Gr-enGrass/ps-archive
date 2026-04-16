#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	char str[21] = { 0 };
    
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
	    for(int i =0;i<21;i++)
        {
            str[i] = '*';
        }
		scanf("%s", str);
		if ((str[6] != '*' || str[6] == '\0') && (str[9] == '\0' || str[9] == '*'))
		{
			printf("yes\n");
		}
		else
			printf("no\n");
	}
}
