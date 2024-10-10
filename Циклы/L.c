#include <stdio.h>

int main(){
    int n, s=0, i = 1;
    scanf("%d", &n);
    while (n){
        s += i * (n % 10);
        n /= 10;
        i *= 2;
    }
    printf("%d\n", s); 
    
    return 0;
}