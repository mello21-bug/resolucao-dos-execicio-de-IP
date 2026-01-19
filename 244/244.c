#include <stdio.h>
#include <string.h>

int main() {
    char texto[51];
    char caractere;
    int contador = 0;

    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';  // remove o '\n'

    scanf("%c", &caractere);

    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] == caractere) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}


