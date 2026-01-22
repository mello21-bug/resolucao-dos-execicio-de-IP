#include <stdio.h>

int raiz(int a, int b) {
    int x = 1;
    int potencia;

    while (1) {
        potencia = 1;

        for (int i = 0; i < b; i++) {
            potencia *= x;
        }

        if (potencia == a) {
            return x;
        }

        x++;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int resultado = raiz(a, b);
    printf("%d\n", resultado);

    return 0;
}
