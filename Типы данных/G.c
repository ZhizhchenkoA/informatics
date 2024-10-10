#include <stdio.h>


int main() {
    double X, Y, Z;
    scanf("%lf %lf %lf", &X, &Y, &Z);
    int N, i;
    scanf("%d", &N);
    double a, b, c, q;
    for (i = 0; i < N; ++i){
        scanf("%lf %lf %lf %lf", &a, &b, &c, &q);
        X -= a * q;
        Y -= b * q;
        Z -= c * q;
    }

    if (X <= 1e-6 && Y <= 1e-6 && Z <= 1e-6)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}