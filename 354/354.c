#include <stdio.h>

void imprimePares(int n) {
    if (n < 0)  // Caso base
        return;

    // Chamada recursiva primeiro com n-2
    imprimePares(n - 2);

    if (n % 2 == 0)  // Só imprime se for par
        printf("%d\n", n);
}

int main() {
    int N;
    scanf("%d", &N);

    // Se N for ímpar, ajusta para o maior par menor que N
    if (N % 2 != 0)
        N--;

    imprimePares(N);

    return 0;
}
