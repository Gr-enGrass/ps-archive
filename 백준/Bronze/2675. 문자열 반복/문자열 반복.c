#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


main(t, r, i, j) 
{ 
	char s[21]; 
	for (scanf("%d", &t); t--;) 
	{ 
		scanf("%d %s", &r, s); 
		for (i = 0; s[i] != 0; i++)
		{
			for (j = 0; j < r; j++)
			{
				printf("%c", s[i]);
			}
		}
		printf("\n"); 
	} 
}