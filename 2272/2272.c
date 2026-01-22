#include <stdio.h>

int main() {
    int L, C;
    scanf("%d %d", &L, &C);

    int mat[L][C];

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    long long D;
    scanf("%lld", &D);

    // Eliminação
    if (L % 2 == 0) {
        // linha por linha
        for (int i = 0; i < L && D > 0; i++) {
            for (int j = 0; j < C && D > 0; j++) {
                if (mat[i][j] == 1) {
                    mat[i][j] = 0;
                    D--;
                }
            }
        }
    } else {
        // coluna por coluna
        for (int j = 0; j < C && D > 0; j++) {
            for (int i = 0; i < L && D > 0; i++) {
                if (mat[i][j] == 1) {
                    mat[i][j] = 0;
                    D--;
                }
            }
        }
    }

    // Contar células vivas restantes
    int vivas = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (mat[i][j] == 1)
                vivas++;
        }
    }

    // Imprimir matriz final
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d", mat[i][j]);
            if (j < C - 1) printf(" ");
        }
        printf("\n");
    }

    // Imprimir eliminações restantes e células vivas
    printf("%lld %d\n", D, vivas);

    return 0;
}
