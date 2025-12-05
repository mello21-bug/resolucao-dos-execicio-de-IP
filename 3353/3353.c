#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int mat[100][100];
    int transposta[100][100];

    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

   
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            transposta[j][i] = mat[i][j];
        }
    }

    
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            printf("%d ", transposta[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}