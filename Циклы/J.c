#include <stdio.h>

int main(){
    long int s=0, k;
    for (int i = 0; i < 100; ++i){
        scanf("%d ", &k);
        s += k;
    }
    printf("%d", s);
    return 0;
}