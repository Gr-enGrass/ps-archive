#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	while (1)
	{
		char str[20] = { 0 };

		scanf("%s", str);
		
		if (str[0] == 'T' && str[1] == 'T' && str[2] == 'Y' && str[3] == 'L')
		{
			printf("talk to you later");
			return 0;
		}
		
		switch (str[0])
		{
		case 'C':
			if (str[1] == 'U')
			{
				if (str[2] == NULL)
				{
					printf("see you\n");
				}
				else if (str[2] == 'Z' && str[3] == NULL)
				{
					printf("because\n");
				}
				else
					printf("%s\n", str);
			}
			else if (str[1] == 'C')
			{
				if (str[2] == 'C' && str[3] == NULL)
				{
					printf("Canadian Computing Competition\n");
				}
				else
					printf("%s\n", str);
			}
			break;

		case ':':
			if (str[1] == '-')
			{
				if (str[2] == ')' && str[3] == NULL)
				{
					printf("I’m happy\n");
				}
				else if (str[2] == '(' && str[3] == NULL)
				{
					printf("I’m unhappy\n");
				}
				else if (str[2] == 'P' && str[3] == NULL)
				{
					printf("stick out my tongue\n");
				}
				else
					printf("%s\n", str);
			}
			
			break;

		case ';':
			if(str[1]=='-'&&str[2]==')')
			printf("wink\n");
			else
			{
				printf("%s\n", str);
			}
			break;

		case '(':
			if(str[1]=='~'&&str[2]=='.'&&str[3]=='~'&&str[4]==')'&&str[5]==NULL)
			printf("sleepy\n");
			else
			{
				printf("%s\n", str);
			}
			break;

		case 'T':
			if (str[1] == 'A'&&str[2]==NULL)
			{
				printf("totally awesome\n");
			}
			else if(str[1]=='Y' && str[2] == NULL)
			{
				printf("thank-you\n");
			}
			else
				printf("%s\n", str);
			break;
			
		case 'Y':
			if(str[1]=='W' && str[2] == NULL)
			printf("you’re welcome\n");
			else
				printf("%s\n", str);
			break;

		default:
			printf("%s\n",str);
		}
	}
}