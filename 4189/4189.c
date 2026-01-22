#include <stdio.h>

long long fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    long long soma = fatorial(a) + fatorial(b) + fatorial(c);
    
    printf("%lld\n", soma);
    return 0;
}


