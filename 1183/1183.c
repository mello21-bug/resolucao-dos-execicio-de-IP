#include <stdio.h>

int main() {
    double soma = 0.0, M[12][12];
    char O[2];
    int linha, coluna;

    scanf("%s", O);

    for (linha = 0; linha < 12; linha++) {
        for (coluna = 0; coluna < 12; coluna++) {
            scanf("%lf", &M[linha][coluna]);
        }
    }

    for (linha = 0; linha < 12; linha++) {
        for (coluna = linha + 1; coluna < 12; coluna++) {
            soma += M[linha][coluna];
        }
    }

    if (O[0] == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / 66.0);
    }

    return 0;
}
