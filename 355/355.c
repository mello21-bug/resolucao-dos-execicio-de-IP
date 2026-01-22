#include <stdio.h>

void imprimeParesDec(int n) {
    if (n < 0)  // Caso base
        return;

    printf("%d\n", n);  // Imprime primeiro
    imprimeParesDec(n - 2);  // Recursão para o próximo par
}

int main() {
    int N;
    scanf("%d", &N);

    // Ajusta para o maior par menor ou igual a N
    if (N % 2 != 0)
        N--;

    imprimeParesDec(N);

    return 0;
}
