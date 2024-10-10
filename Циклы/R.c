#include <stdio.h>

int main(){
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n){
        i *= 2;
    }
    if (i / 2  == n)
        printf("YES\n");
    else   
        printf("NO\n");
    return 0;

}