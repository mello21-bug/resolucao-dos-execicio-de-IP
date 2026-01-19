#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[1000];
    int cont = 0;

    // Lê a linha inteira
    fgets(texto, sizeof(texto), stdin);

    // Percorre a string contando 'a' ou 'A'
    for (int i = 0; i < strlen(texto); i++) {
        if (tolower(texto[i]) == 'a') {
            cont++;
        }
    }

    // Saída
    printf("%d\n", cont);

    return 0;
}
