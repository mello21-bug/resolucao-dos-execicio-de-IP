#include <stdio.h>

typedef struct {
    int nota;
    float preco;
} Jogo;

int main() {
    int N;
    scanf("%d", &N);

    Jogo jogos[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %f", &jogos[i].nota, &jogos[i].preco);
    }

    /* Ordenação */
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (jogos[i].nota < jogos[j].nota ||
               (jogos[i].nota == jogos[j].nota &&
                jogos[i].preco > jogos[j].preco)) {

                Jogo aux = jogos[i];
                jogos[i] = jogos[j];
                jogos[j] = aux;
            }
        }
    }

    /* Saída */
    for (int i = 0; i < N; i++) {
        printf("Nota: %d\n", jogos[i].nota);
        printf("Preco: %.2f\n\n", jogos[i].preco);
    }

    return 0;
}
