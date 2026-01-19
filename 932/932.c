#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char linha[201];

    while (fgets(linha, 201, stdin)) {
        // Remove o \n do final da string lida pelo fgets
        linha[strcspn(linha, "\n")] = '\0';

        // Condição de parada
        if (strcmp(linha, "*") == 0) break;

        // strtok divide a string em "tokens" usando o espaço como delimitador
        // Isso automaticamente ignora múltiplos espaços entre as palavras
        char *palavra = strtok(linha, " ");
        int primeiro = 1;

        while (palavra != NULL) {
            // Converte toda a palavra para minúsculo primeiro
            for (int i = 0; palavra[i]; i++) {
                palavra[i] = tolower(palavra[i]);
            }

            // Verifica se a palavra NÃO é uma das exceções
            if (strcmp(palavra, "da") != 0 && strcmp(palavra, "de") != 0 &&
                strcmp(palavra, "di") != 0 && strcmp(palavra, "do") != 0 &&
                strcmp(palavra, "du") != 0 && strcmp(palavra, "e") != 0) {
                
                // Se não for exceção, a primeira letra vira maiúscula
                palavra[0] = toupper(palavra[0]);
            }

            // Se for a primeira palavra da frase, ela SEMPRE começa com maiúscula
            // (ex: "Da Silva" se "Da" for o primeiro nome)
            if (primeiro) {
                palavra[0] = toupper(palavra[0]);
                printf("%s", palavra);
                primeiro = 0;
            } else {
                // Imprime um espaço antes das palavras subsequentes
                printf(" %s", palavra);
            }

            palavra = strtok(NULL, " ");
        }
        printf("\n");
    }

    return 0;
}