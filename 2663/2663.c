#include <stdio.h>

int main() {
    int N, K;
    int i, j, temp;
    int pontos[1005];

    scanf("%d", &N);
    scanf("%d", &K);

    for (i = 0; i < N; i++) {
        scanf("%d", &pontos[i]);
    }

    // Ordenar em ordem decrescente (bubble sort simples)
    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N-1-i; j++) {
            if (pontos[j] < pontos[j+1]) {
                temp = pontos[j];
                pontos[j] = pontos[j+1];
                pontos[j+1] = temp;
            }
        }
    }

    int pontoCorte = pontos[K-1]; // pontuação do K-ésimo colocado
    int classificados = 0;

    for (i = 0; i < N; i++) {
        if (pontos[i] >= pontoCorte)
            classificados++;
    }

    printf("%d\n", classificados);

    return 0;
}
