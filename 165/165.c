#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int mat[10][10];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }


    int somaBase = 0;
    for (int j = 0; j < N; j++) {
        somaBase += mat[0][j];
    }

    int soma;
    

    for (int i = 1; i < N; i++) {
        soma = 0;
        for (int j = 0; j < N; j++) {
            soma += mat[i][j];
        }
        if (soma != somaBase) {
            printf("-1");
            return 0;
        }
    }

    
    for (int j = 0; j < N; j++) {
        soma = 0;
        for (int i = 0; i < N; i++) {
            soma += mat[i][j];
        }
        if (soma != somaBase) {
            printf("-1");
            return 0;
        }
    }


    soma = 0;
    for (int i = 0; i < N; i++) {
        soma += mat[i][i];
    }
    if (soma != somaBase) {
        printf("-1");
        return 0;
    }

    
    soma = 0;
    for (int i = 0; i < N; i++) {
        soma += mat[i][N - 1 - i];
    }
    if (soma != somaBase) {
        printf("-1");
        return 0;
    }

    
    printf("%d", somaBase);

    return 0;
}