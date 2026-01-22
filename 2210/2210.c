#include <stdio.h>

/* Imprime um caractere repetido recursivamente */
void imprime_char(char c, int qtd) {
    if (qtd == 0)
        return;

    printf("%c", c);
    imprime_char(c, qtd - 1);
}

/* Desenha a pirâmide linha por linha (recursivo) */
void piramide(int linha, int P) {
    if (linha == P)
        return;

    int pontos = P - 1 - linha;

    imprime_char('.', pontos);
    printf("*");

    if (linha > 0) {
        imprime_char('-', 2 * linha - 1);
        printf("*");
    }

    imprime_char('.', pontos);
    printf("\n");

    piramide(linha + 1, P);
}

int main() {
    int P;
    scanf("%d", &P);

    piramide(0, P);

    return 0;
}
