#include <stdio.h>

int contemLetra(char nome[], char letra) {
    int i = 0;

    // converte letra para minúscula, se necessário
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
    }

    while (nome[i] != '\0') {
        char c = nome[i];

        // converte caractere do nome para minúscula
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == letra) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    char nomes[10][11];
    char letra;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
    }

    scanf(" %c", &letra);

    for (i = 0; i < 10; i++) {
        if (contemLetra(nomes[i], letra)) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
