#include <stdio.h>

// função recursiva para calcular fatorial
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int i, num;
    int soma = 0; // acumulador

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);

        // decisão: verifica se é múltiplo de 3
        if (num % 3 == 0) {
            soma += fatorial(num);
        }
    }

    printf("%d\n", soma);
    return 0;
}
