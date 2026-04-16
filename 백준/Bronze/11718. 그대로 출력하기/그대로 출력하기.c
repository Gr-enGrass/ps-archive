#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char s[101];

int main() {
    while (scanf("%[^\n]\n", s) == 1) {
        printf("%s\n", s);
    }
    return 0;
}
