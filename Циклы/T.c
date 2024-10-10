#include <stdio.h>

int main(){
    float x, y;
    int k;
    scanf("%f %f", &x, &y);
    for (k = 1; x < y; x *= 1.1, ++k);
    printf("%d\n", k);
    return 0;

}