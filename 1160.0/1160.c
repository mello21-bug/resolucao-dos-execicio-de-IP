#include <stdio.h>
#include <math.h>

/* Função que calcula a distância euclidiana no plano XZ */
double distancia(int x1, int z1, int x2, int z2) {
    return sqrt((x1 - x2) * (x1 - x2) + (z1 - z2) * (z1 - z2));
}

int main() {
    int X, Z;
    scanf("%d %d", &X, &Z);

    double h = distancia(X, Z, 34, 220);   // Hogsmeade
    double k = distancia(X, Z, 0, 0);      // Kakariko
    double s = distancia(X, Z, 140, 456);  // Solitude

    printf("Distancia para Hogsmeade: %.2f\n", h);
    printf("Distancia para Kakariko: %.2f\n", k);
    printf("Distancia para Solitude: %.2f\n", s);

    return 0;
}
