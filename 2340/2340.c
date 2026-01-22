#include <stdio.h>

int calcula(int n) {
    // Caso base: dígito mais à esquerda encontrado
    if (n < 10) {
        if (n % 2 == 0)
            return 2; // dígito par
        else
            return 1; // dígito ímpar
    }

    // Chamada recursiva
    return calcula(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    int incremento = calcula(n);
    printf("%d\n", n + incremento);

    return 0;
}
