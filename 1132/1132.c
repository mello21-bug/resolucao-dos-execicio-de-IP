#include <stdio.h>

int main() {
    int X, Y, i, soma;

    scanf("%d %d", &X, &Y);

    soma = 0;

    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (i = X; i <= Y; i++) {
        if (i % 13 != 0)
            soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
