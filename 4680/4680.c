#include <stdio.h>
#include <string.h>

struct Crianca {
    char nome[21];
    int pontuacao;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Crianca c[N];

    for (int i = 0; i < N; i++) {
        int base, otima, boa, ruim, pessima;

        scanf("%s %d %d %d %d %d",
              c[i].nome,
              &base,
              &otima,
              &boa,
              &ruim,
              &pessima);

        c[i].pontuacao = base
                       + otima * 5
                       + boa * 3
                       - ruim * 3
                       - pessima * 5;
    }

    // Ordenação: pontuação decrescente, depois nome crescente
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (c[j].pontuacao > c[i].pontuacao ||
               (c[j].pontuacao == c[i].pontuacao &&
                strcmp(c[j].nome, c[i].nome) < 0)) {

                struct Crianca temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // SAÍDA — com espaço antes do \n (PEGADINHA DO HUXLEY)
    for (int i = 0; i < N; i++) {
        printf("%s %d \n", c[i].nome, c[i].pontuacao);
    }

    return 0;
}
