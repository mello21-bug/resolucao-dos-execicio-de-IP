#include <stdio.h>

int main() {
    int N, M;
    int notas[] = {2, 5, 10, 20, 50, 100};
    int i, j, troco;

    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) {
            break;
        }

        troco = M - N;
        int possible = 0;

        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                if (notas[i] + notas[j] == troco)
                    possible = 1;
            }
        }

        if (possible) {
            printf("possible\n");
        }
            
        else {
            printf("impossible\n");
        }
            
    }

    return 0;
}

