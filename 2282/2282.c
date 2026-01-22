#include <stdio.h>

int conta(int n, int x) {
    if (n < 10) {
        return (n == x) ? 1 : 0;
    }
    return (n % 10 == x) + conta(n / 10, x);
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    printf("%d\n", conta(n, x));
    return 0;
}
