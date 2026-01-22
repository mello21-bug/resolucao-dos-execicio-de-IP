#include <stdio.h>

void binario(int n) {
    if (n < 2) {
        printf("%d\n", n);
    } else {
        binario(n / 2);
        printf("%d\n", n % 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    binario(n);

    return 0;
}
