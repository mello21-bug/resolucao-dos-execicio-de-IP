#include <stdio.h>

int main() {
    int P, E;
    scanf("%d", &P);
    scanf("%d", &E);

    int votos[200][200];   
    int cont[200] = {0};   

    
    for (int i = 0; i < E; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &votos[i][j]);
        }
    }

    
    for (int j = 0; j < P; j++) {   
        for (int i = 0; i < E; i++) { 
            if (votos[i][j] == 1) {
                cont[j]++;
            }
        }
    }

    
    for (int k = 0; k < P; k++) {
        printf("Princesa %d: %d voto(s)\n", k + 1, cont[k]);
    }

    return 0;
}