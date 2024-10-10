#include <stdio.h>

int main(){
    int n, s = 0, k;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &k);
        s += k;
    }
    printf("%d", s);
        
    
    return 0;
}