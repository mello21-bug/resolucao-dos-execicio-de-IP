#include <stdio.h>

#define MAX 100  

int main() {
    int L, C, N;
    scanf("%d %d %d", &L, &C, &N);

    int matriz[MAX][MAX];
    int aux[MAX][MAX];

    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    N = N % 4;
    if (N < 0) N += 4;

    int linhas = L;
    int colunas = C;

    for (int rot = 0; rot < N; rot++) {
        
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                aux[j][linhas - 1 - i] = matriz[i][j];
            }
        }

        
        int temp = linhas;
        linhas = colunas;
        colunas = temp;

        
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = aux[i][j];
            }
        }
    }

    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if (j != colunas - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
