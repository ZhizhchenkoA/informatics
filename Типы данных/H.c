#include <stdio.h>

int main(){
    int N, i;
    scanf("%d", &N);
    int x, y, max_x = 0, max_y = 0;
    for (i = 0; i < N; ++i){
        scanf("%d %d", &x, &y);
        if (x * x + y * y > max_x * max_x + max_y * max_y){
            max_x = x;
            max_y = y;
        }
    }
    printf("%d %d\n", max_x, max_y);

    return 0;
}