#include <stdio.h>

int main(){
    int n, i = 2;
    scanf("%d", &n);
    while (n % i != 0)
        ++i;
    printf("%d\n", i);

    return 0;
}