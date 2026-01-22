#include <stdio.h>

int mapa[10][10];

int sair(int i, int j) {
    // Fora da matriz
    if (i < 0 || i >= 10 || j < 0 || j >= 10)
        return 0;

    // Local perigoso
    if (mapa[i][j] == 0)
        return 0;

    // Chegou à saída
    if (i == 9 && j == 9)
        return 1;

    // Marca como visitado (garantia extra, não atrapalha)
    mapa[i][j] = 0;

    // Ordem obrigatória:
    // Sul > Leste > Norte > Oeste
    if (sair(i + 1, j)) return 1;
    if (sair(i, j + 1)) return 1;
    if (sair(i - 1, j)) return 1;
    if (sair(i, j - 1)) return 1;

    return 0;
}

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }

    if (sair(0, 0))
        printf("RUN!\n");
    else
        printf("Welcome to the Upside Down.\n");

    return 0;
}
