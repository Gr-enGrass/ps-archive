#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char a[16],b[16];
    int result = 1, cnt = 8,cnt2=1;

    scanf("%15[^\n]s", a);

    for (int i = 0; i < 15; i += 2)
    {
        if (a[i] == '0' + cnt2)
            result = 0;
        else if (a[i] == '0' + cnt)
            result = 1;
        else {
            result = 2;
            break;
        }
        if (result != (a[0]=='1'?0:1))
        {
            printf("mixed");
            return 0;
        }
        cnt--;
        cnt2++;
    }

    switch (result)
    {
    case 0:
        printf("ascending\n");
        break;
    case 1:
        printf("descending\n");
        break;
    default:
        printf("mixed");
    }
    return 0;
}