#include <stdio.h>
#include <string.h>

int main() {
    char nome[51], sobrenome[51], completo[103];

    // Lê nome e sobrenome
    fgets(nome, sizeof(nome), stdin);
    fgets(sobrenome, sizeof(sobrenome), stdin);

    // Remove o '\n'
    nome[strcspn(nome, "\n")] = '\0';
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    // Concatenação usando string
    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    // Saída
    printf("%s\n", completo);

    return 0;
}
