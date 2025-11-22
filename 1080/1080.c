#include <stdio.h>

int main() {
    int valor;
    int maiorValor = 0; 
    int posicao = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &valor);

        if (valor > maiorValor) {
            maiorValor = valor;
            posicao = i;
        }
    }

    printf("%d\n", maiorValor);
    printf("%d\n", posicao);

    return 0;
}
