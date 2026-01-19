#include <stdio.h>
#include <string.h>

int main() {
    char texto[501];
    int palavras = 0;
    int dentroPalavra = 0;

    // Lê a linha inteira
    fgets(texto, sizeof(texto), stdin);

    // Percorre a string
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ' && texto[i] != '\n') {
            // Entrou em uma palavra
            if (dentroPalavra == 0) {
                palavras++;
                dentroPalavra = 1;
            }
        } else {
            // Saiu de uma palavra
            dentroPalavra = 0;
        }
    }

    // Saída
    printf("%d\n", palavras);

    return 0;
}
