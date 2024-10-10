#include <stdio.h>

int main(){
    int n, i = 1, k = 0;
    scanf("%d", &n);
    for (; i < n; i *= 2, ++k);
    printf("%d\n", k);
    return 0;

}