#include <stdio.h>

int main(){
    int n, k, n0=0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &k);
        n0 += (k == 0);
    }
    if (n0)
        printf("YES");
    else
        printf("NO");

    return 0;
}