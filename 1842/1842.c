#include <stdio.h>
#include <math.h>

double distancia(int xa, int ya, int xb, int yb) {
    double dx, dy;

    dx = xb - xa;
    dy = yb - ya;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    int N;
    int xa, ya, xb, yb;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d %d %d", &xa, &ya, &xb, &yb);
        printf("%.2lf\n", distancia(xa, ya, xb, yb));
    }

    return 0;
}
