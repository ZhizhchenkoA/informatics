#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", y / x + (y % x != 0));
    
    return 0;
}