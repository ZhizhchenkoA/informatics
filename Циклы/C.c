#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i*i <= b; ++i)
        if (i*i >= a)
            printf("%d ", i*i);
    return 0;
}