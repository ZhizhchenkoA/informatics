#include <stdio.h>


int main(){
    long double a, b, c;
    scanf("%Lf %Lf %Lf", &a, &b, &c);
    long long M = 10000000;
    long long a1 = a * M, b1 = b * M, c1 = c * M;

    if (a1 + b1 == c1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}