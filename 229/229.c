#include <stdio.h>

int main() {
    int N, M, V, G;
    int campo[45][45] = {0};
    int novo[45][45] = {0};

    scanf("%d %d %d %d", &N, &M, &V, &G);

    
    for (int i = 0; i < V; i++) {
        int y, x;
        scanf("%d %d", &y, &x);
        campo[y][x] = 1;
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf(" %d", campo[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int g = 0; g < G; g++) {

        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {

                int vizinhos = 0;

                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dy == 0 && dx == 0)
                            continue;

                        int ni = i + dy;
                        int nj = j + dx;

                        if (ni >= 0 && ni < N && nj >= 0 && nj < M) {
                            vizinhos += campo[ni][nj];
                        }
                    }
                }

                if (campo[i][j] == 1) {
                    if (vizinhos < 2 || vizinhos > 3)
                        novo[i][j] = 0;
                    else
                        novo[i][j] = 1;
                } else {
                    if (vizinhos == 3)
                        novo[i][j] = 1;
                    else
                        novo[i][j] = 0;
                }
            }
        }

        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                campo[i][j] = novo[i][j];
            }
        }

        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf(" %d", campo[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
