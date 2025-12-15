#include <stdio.h>

int main() {
    int N;
    int A[50][50], B[50][50], C[50][50];

    scanf("%d", &N);

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", C[i][j]);
            if (j < N - 1)
                printf(" ");
        }
        printf("\n");
    }

    
    int identidade = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && C[i][j] != 1)
                identidade = 0;
            if (i != j && C[i][j] != 0)
                identidade = 0;
        }
    }

    if (identidade)
        printf("Acertou\n");
    else
        printf("Errou\n");

    return 0;
}
