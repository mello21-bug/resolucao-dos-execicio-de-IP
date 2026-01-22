#include <stdio.h>

/* Função recursiva para calcular o valor do número */
long long calculaNumero(int n, long long fator) {
    int digito;
    if (n == 0)
        return 0;

    scanf("%d", &digito);
    return digito * fator + calculaNumero(n - 1, fator * 10);
}

/* Função recursiva para imprimir número */
void imprimeNumero(long long n) {
    if (n < 10) {
        printf("%lld", n);
        return;
    }
    imprimeNumero(n / 10);
    printf("%lld", n % 10);
}

int main() {
    int P;
    scanf("%d", &P);

    long long soma = 0;

    if (P == 0) {
        printf("0\n");
        return 0;
    }

    /* Soma das parcelas */
    if (P > 0) {
        int n;
        scanf("%d", &n);
        soma += calculaNumero(n, 1);
        P--;
        if (P > 0) {
            ungetc('\n', stdin);
        }
        while (P--) {
            scanf("%d", &n);
            soma += calculaNumero(n, 1);
        }
    }

    imprimeNumero(soma);
    printf("\n");

    return 0;
}
