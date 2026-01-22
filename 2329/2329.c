#include <stdio.h>

void atender(int i, int n, char nomes[][51], int comida[]) {
    if (i == n)
        return;

    // Chama recursivamente até o último
    atender(i + 1, n, nomes, comida);

    // Atendimento (LIFO)
    while (comida[i] > 0) {
        printf("%s foi servido(a).\n", nomes[i]);
        comida[i] -= 400;
        if (comida[i] > 0) {
            printf("Fica tranquilo(a), %s pode se servir novamente!\n", nomes[i]);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    char nomes[N][51];
    int comida[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %d", nomes[i], &comida[i]);
    }

    atender(0, N, nomes, comida);

    return 0;
}
