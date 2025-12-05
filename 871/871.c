#include <stdio.h>

int main() {
    int L, C;
    scanf("%d %d", &L, &C);

    int mat[100][100];

    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

   
    printf("Matriz formada:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d", mat[i][j]);
            if (j < C - 1) printf(" ");
        }
        printf("\n");
    }
 
    int somaPrin = 0, somaSec = 0;
    int menores = 0, maiores = 0;

    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {

            if (mat[i][j] < 0) {
                menores++;
            }
            if (mat[i][j] > 0) {
                maiores++;
            } 

            if (L == C) { 
                if (i == j) {
                    somaPrin += mat[i][j];
                } 
                if (i + j == L - 1) {
                    somaSec += mat[i][j];
                } 
            }
        }
    }

    
    if (L == C) {
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", somaPrin, somaSec);
    
    } else {
         printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    }

    
    printf("A matriz possui %d numero(s) menor(es) que zero.\n", menores);
    printf("A matriz possui %d numero(s) maior(es) que zero.\n", maiores);

    return 0;
}
