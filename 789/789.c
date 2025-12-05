#include <stdio.h>

int main() {
    int n, inst = 1;
    scanf("%d", &n);

    while (n--) {
        int mat[9][9];
        int i, j, k;
        int ok = 1;

        
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        
        for (i = 0; i < 9 && ok; i++) {
            int freq[10] = {0};
            for (j = 0; j < 9; j++) {
                int v = mat[i][j];
                if (v < 1 || v > 9 || freq[v]) { ok = 0; break; }
                freq[v] = 1;
            }
        }

        
        for (j = 0; j < 9 && ok; j++) {
            int freq[10] = {0};
            for (i = 0; i < 9; i++) {
                int v = mat[i][j];
                if (v < 1 || v > 9 || freq[v]) { ok = 0; break; }
                freq[v] = 1;
            }
        }

        
        for (int bi = 0; bi < 9 && ok; bi += 3) {
            for (int bj = 0; bj < 9 && ok; bj += 3) {
                int freq[10] = {0};
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        int v = mat[bi + i][bj + j];
                        if (v < 1 || v > 9 || freq[v]) { ok = 0; break; }
                        freq[v] = 1;
                    }
                }
            }
        }

        
        printf("Instancia %d\n", inst++);
        if (ok) {
            printf("SIM\n\n");
        }else  {
             printf("NAO\n\n");
        } 
    }
    return 0;
}