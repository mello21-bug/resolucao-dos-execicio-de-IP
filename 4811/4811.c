#include <stdio.h>
#include <string.h>

char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int indice_no_alfabeto(char c) {
    for (int i = 0; i < 52; i++) {
        if (alfabeto[i] == c)
            return i;
    }
    return -1;
}

char descriptografa_letra(char c, int deslocamento) {
    int idx = indice_no_alfabeto(c);
    if (idx == -1) return c;

    int novo = (idx - deslocamento) % 52;
    if (novo < 0) novo += 52;

    return alfabeto[novo];
}

void descriptografar(char texto[], int C) {
    int pos = 0; // posição da letra (sem contar espaços)

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == ' ') {
            printf(" ");
        } else {
            pos++;
            int deslocamento = C + pos;
            printf("%c", descriptografa_letra(texto[i], deslocamento));
        }
    }
    printf("\n");
}

int main() {
    int C;
    char texto[55];

    scanf("%d", &C);
    getchar(); // limpar \n

    while (1) {
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0';

        if (strcmp(texto, "FIM") == 0)
            break;

        descriptografar(texto, C);
    }

    return 0;
}
