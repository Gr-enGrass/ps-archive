#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int h, m, s,eh,em,es;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d %d %d", &h, &m, &s,&eh,&em,&es);

		eh -= h;
		em -= m;
		es -= s;

		if (es < 0)
		{
			es = 60 + es;
			em--;
		}
		if (em < 0)
		{
			em = 60 + em;
			eh--;
		}

		printf("%d %d %d\n", eh, em, es);
	}
}
