#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N == 0) {
        printf("Vazia");
        return 0;
    }

    int m1[100][100], m2[100][100], mr[100][100];

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mr[i][j] = m1[i][j] + m2[i][j];
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\n", mr[i][j]);
        }
    }

    return 0;
}