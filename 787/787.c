#include <stdio.h>

long long fastExp(int a, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        long long temp = fastExp(a, n / 2);
        return temp * temp;
    } else {
        long long temp = fastExp(a, (n - 1) / 2);
        return a * temp * temp;
    }
}

int main() {
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);

    printf("%lld\n", fastExp(a, n));
    return 0;
}
