#include <stdio.h>

int main() {
    int N, M, O;
    scanf("%d %d %d", &N, &M, &O);

    int A[N][M];
    int B[M][O];
    int C[N][O];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j++) {
            printf("%d", C[i][j]);
            if (j < O - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
