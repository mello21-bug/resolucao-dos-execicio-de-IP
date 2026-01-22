#include <stdio.h>

unsigned long long somaDigitos(unsigned long long n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    printf("%llu\n", somaDigitos(n));

    return 0;
}
