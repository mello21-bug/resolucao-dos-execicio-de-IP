#include <stdio.h>

void mostrarMultiplos(int i, int f, int x) {
    int n;

    for (n = i; n <= f; n++) {
        if (n % x == 0) {
            printf("%d\n", n);
        }
    }
}

int main() {
    int i, f, x;

    scanf("%d", &i);
    scanf("%d", &f);
    scanf("%d", &x);

    mostrarMultiplos(i, f, x);

    return 0;
}
