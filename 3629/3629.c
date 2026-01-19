#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[31];
    int K;

    scanf("%s", palavra);
    scanf("%d", &K);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {

        /* Converte para minúscula */
        palavra[i] = tolower(palavra[i]);

        /* Desloca a letra */
        palavra[i] = palavra[i] + K;

        /* Se passar de 'z', volta para o início do alfabeto */
        if (palavra[i] > 'z') {
            palavra[i] = palavra[i] - 26;
        }
    }

    printf("%s\n", palavra);

    return 0;
}
