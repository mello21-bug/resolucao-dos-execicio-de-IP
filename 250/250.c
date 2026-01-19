#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    char c;
    int encontrou = 0;

    // Leitura da string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove '\n'

    // Leitura do caractere
    scanf("%c", &c);

    // Percorre a string procurando o caractere
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    // Se não encontrou nenhuma ocorrência
    printf("-1\n");

    return 0;
}
