#include <stdio.h>

int ehPrimo(int n) {
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    int maiorPrimo = -1;

    while (1) {
        scanf("%d", &num);

        if (num == 404) {
            break;
        }

        if (ehPrimo(num)) {
            if (num > maiorPrimo) {
                maiorPrimo = num;
            }
        }
    }

    if (maiorPrimo == -1) {
        printf("SEM PRIMOS\n");
    } else {
        printf("%d\n", maiorPrimo);
    }

    return 0;
}
