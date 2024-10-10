#include <stdio.h>

int main(){
    long int x, k=0;
    scanf("%d", &x);
    for (long int i = 1; i * i <= x; ++i)
        if (x % i == 0)
            k += 2 - (i * i == x);
    
    printf("%d", k);

    return 0;
}