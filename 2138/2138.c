#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int pares[10000];
    
    
    for (int i = 0; i < N; i++) {
        pares[i] = 2 * (i + 1);
    }

   
    int linhas = N / M;  
    int mat[1000][1000];

    
    int idx = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = pares[idx++];
        }
    }

    
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < linhas; i++) {
            printf("%d", mat[i][j]);
            if (i < linhas - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}