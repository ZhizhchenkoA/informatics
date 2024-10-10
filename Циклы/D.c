#include <stdio.h>

int main(){
    int x, d, k=0;
    scanf("%d %d", &x, &d);
    while (x){
        if (x % 10 == d)
            k += 1;
        x /= 10;
    }
    printf("%d\n", k);
    return 0;
}