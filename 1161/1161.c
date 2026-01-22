#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int A, L, P, H;
    int totalA, totalL, totalP;
    int maior;

    scanf("%d %d %d", &A, &L, &P);
    scanf("%d", &H);

    totalA = A * H;
    totalL = L * H;
    totalP = P * H;

    maior = maximo(totalA, totalL);
    maior = maximo(maior, totalP);

    printf("%d\n", maior);

    return 0;
}
