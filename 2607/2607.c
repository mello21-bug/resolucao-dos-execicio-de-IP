#include <stdio.h>
#include <string.h>

typedef struct {
    char nomes[50][50];
    int qtd;
} Hash;

int main() {
    int N;
    scanf("%d", &N);

    Hash hash[32][13] = {0};

    char nome[50];
    int dia, mes;

    for (int i = 0; i < N; i++) {
        scanf(" %49s %d %d", nome, &dia, &mes);
        strcpy(hash[dia][mes].nomes[hash[dia][mes].qtd], nome);
        hash[dia][mes].qtd++;
    }

    char meses[13][15] = {
        "", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int achou = 0;

    /* ORDEM CORRETA: mês → dia */
    for (int m = 1; m <= 12; m++) {
        for (int d = 1; d <= 31; d++) {
            if (hash[d][m].qtd >= 2) {
                achou = 1;
                printf("Dia %d de %s: ", d, meses[m]);

                for (int i = 0; i < hash[d][m].qtd; i++) {
                    printf("%s", hash[d][m].nomes[i]);
                    if (i < hash[d][m].qtd - 1)
                        printf(", ");
                }
                printf("\n");
            }
        }
    }

    if (!achou) {
        printf("Ninguem faz aniversario no mesmo dia");
    }

    return 0;
}
