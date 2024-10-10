#include <stdio.h>

int main(){
    long long n=0;
    scanf("%ld", &n);
    if (n % 2 == 0){
    if (n > 0)
        printf("%ld\n", ((n / 2) * (1 + n)));
    else{
        n = -n;
        printf("%ld\n", (-(n / 2) * (n + 1)) + 1);
    }
    }else{
        if (n > 0)
        printf("%ld\n", (n * ((1 + n)/2)));
    else{
        n = -n;
        printf("%ld\n", -(n * ((n + 1)/2)) + 1);
    }
    }
    return 0;
}