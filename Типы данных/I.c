#include <stdio.h>
#include <math.h>

typedef struct {
    int x; 
    int y;
} Point;

int main() {
    int N, i, j;
    
    scanf("%d", &N);
    int x, y;
    double max_d = 0, x1, y1, d, x2, y2; 
    Point points[N];
    
    for (i = 0; i < N; ++i) {        
        scanf("%d %d", &x, &y);
        Point tmp = {x, y};
        points[i] = tmp;
    }

    for (i = 0; i < N - 1; ++i) {
        x1 = points[i].x;
        y1 = points[i].y;
        for (j = i + 1; j < N; ++j){
            x2 = points[j].x;
            y2 = points[j].y;
            d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            if (d > max_d)
                max_d = d;
        }
    }

    printf("%.15g\n", max_d);

    return 0;
}