#include <stdio.h>
#include <math.h>

double distancia(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double d = distancia(x1, y1, x2, y2);

    printf("%.0f\n", d);  // imprime sem casas decimais

    return 0;
}