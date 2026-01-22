#include <stdio.h>

int calcula(int n) {
    if (n < 10) {
        // dígito mais à esquerda
        if (n % 2 == 0)
            return -4;
        else
            return -3;
    }
    return calcula(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    int ajuste = calcula(n);
    printf("%d\n", n + ajuste);

    return 0;
}
