#include <stdio.h>

int main(){
    int x, s=0;
    scanf("%d", &x);
    while (x){
        s *= 10;
        s += (x % 10);
        x /= 10;
    }
    printf("%d\n", s);
    return 0;
}