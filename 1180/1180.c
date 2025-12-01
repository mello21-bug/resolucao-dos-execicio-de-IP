#include <stdio.h>

int main() {
    int N, posicao = 0, menorValor;

    scanf("%d", &N);
    int X[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    menorValor = X[0]; 

    for (int i = 1; i < N; i++) {
        if (X[i] < menorValor) {
            menorValor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
