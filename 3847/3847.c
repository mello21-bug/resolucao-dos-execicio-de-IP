#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maiuscula(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        // letras sem acento
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = toupper(s[i]);
        }

        // letras acentuadas (UTF-8)
        if ((unsigned char)s[i] == 195) {
            switch ((unsigned char)s[i + 1]) {
                case 160: s[i + 1] = 128; break; // à → À
                case 161: s[i + 1] = 129; break; // á → Á
                case 162: s[i + 1] = 130; break; // â → Â
                case 163: s[i + 1] = 131; break; // ã → Ã
                case 164: s[i + 1] = 132; break; // ä → Ä
                case 167: s[i + 1] = 135; break; // ç → Ç
                case 168: s[i + 1] = 136; break; // è → È
                case 169: s[i + 1] = 137; break; // é → É
                case 170: s[i + 1] = 138; break; // ê → Ê
                case 171: s[i + 1] = 139; break; // ë → Ë
                case 173: s[i + 1] = 141; break; // í → Í
                case 178: s[i + 1] = 146; break; // ò → Ò
                case 179: s[i + 1] = 147; break; // ó → Ó
                case 180: s[i + 1] = 148; break; // ô → Ô
                case 181: s[i + 1] = 149; break; // õ → Õ
                case 186: s[i + 1] = 154; break; // ú → Ú
            }
            i++; // pula o segundo byte
        }
        i++;
    }
}

void referencia(char nome[]) {
    char palavras[50][50];
    int total = 0;

    char *token = strtok(nome, " ");
    while (token != NULL) {
        strcpy(palavras[total++], token);
        token = strtok(NULL, " ");
    }

    // sobrenome
    char sobrenome[50];
    strcpy(sobrenome, palavras[total - 1]);
    maiuscula(sobrenome);

    printf("%s, ", sobrenome);

    for (int i = 0; i < total - 1; i++) {
        printf("%s", palavras[i]);
        if (i < total - 2) printf(" ");
    }

    printf(".\n");
}

int main() {
    char nome[200];
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    referencia(nome);

    return 0;
}
