#include <stdio.h>

int main(){
    int x, y, p;
    int k;
    scanf("%d %d %d", &x, &p, &y);
    x *= 100;
    y *= 100;
    for (k = 0; x < y; x = x * (100 + p) / 100, ++k);
    printf("%d\n", k);

    return 0;
}