#include <stdio.h>

int main(){
    int n, k, n0=0, np=0, nn=0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &k);
        if (k < 0)
            nn++;
        else if (k > 0)
            np++;
        else
            n0++;
    }
    printf("%d %d %d ", n0, np, nn); 
    
    return 0;
}