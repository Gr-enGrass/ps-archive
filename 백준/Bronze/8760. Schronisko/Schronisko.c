#include <stdio.h>
 
int main() {
    int k, i, n, m;
    scanf("%d", &k);
    for(i = 0; i < k; i++){
        scanf("%d %d", &m, &n);
        printf("%d\n", n*m/2);
    }
    return 0;
}