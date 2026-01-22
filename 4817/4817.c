#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Calcula C */
int calculaC(int v[], int n) {
    int somaPar = 0, somaImpar = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            somaPar += v[i];
        else
            somaImpar += v[i];
    }

    return (somaPar * 3 + somaImpar) % 10;
}

/* Calcula R */
int calculaR(int v[], int n) {
    int maior = 1, atual = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            atual++;
            if (atual > maior)
                maior = atual;
        } else {
            atual = 1;
        }
    }

    return maior;
}

/* Gera palavra-base */
void geraBase(char palavra[], char base[]) {
    int j = 0;

    for (int i = 0; i < strlen(palavra); i++) {
        char c = palavra[i];

        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            base[j++] = toupper(c);
        }
    }

    base[j] = '\0';

    if (j == 0) {
        strcpy(base, "VOID");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int digitos[100];
    char linha[105];

    scanf("%s", linha);
    for (int i = 0; i < N; i++) {
        digitos[i] = linha[i] - '0';
    }

    char palavra[101];
    scanf("%s", palavra);

    int C = calculaC(digitos, N);
    int R = calculaR(digitos, N);

    char base[101];
    geraBase(palavra, base);

    printf("%d %d\n", C, R);
    printf("codigo: %s%d%d\n", base, C, R);

    return 0;
}
