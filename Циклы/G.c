#include <stdio.h>

int main(){
    int x, i = 2;
    scanf("%d", &x);
    while (x % i != 0)
        ++i;
    
    printf("%d", i);

    return 0;
}