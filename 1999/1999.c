#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[500];
    char gabarito[500];
    char resposta[500];

    scanf("%d", &N);
    getchar(); // limpa buffer

    /* Leitura do gabarito */
    while (1) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';

        int k = 0;
        for (int i = 0; linha[i] != '\0'; i++) {
            if (linha[i] != ' ') {
                gabarito[k++] = linha[i];
            }
        }
        gabarito[k] = '\0';

        if (k != N) {
            printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
        } else {
            break;
        }
    }

    /* Leitura das respostas */
    while (1) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';

        if (strcmp(linha, "sair") == 0)
            break;

        int k = 0;
        for (int i = 0; linha[i] != '\0'; i++) {
            if (linha[i] != ' ') {
                resposta[k++] = linha[i];
            }
        }
        resposta[k] = '\0';

        if (k != N) {
            printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
            continue;
        }

        int acertos = 0;
        for (int i = 0; i < N; i++) {
            if (gabarito[i] == resposta[i]) {
                acertos++;
            }
        }

        float percentual = (acertos * 100.0) / N;
        printf("Percentual de acertos: %.1f\n", percentual);
    }

    return 0;
}