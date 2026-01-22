#include <stdio.h>

long long memo[71];

long long f(int x) {
    if (memo[x] != -1)
        return memo[x];

    memo[x] = f(x - 2) - f(x - 3);
    return memo[x];
}

int main() {
    int x;

    // inicializa memoização
    for (int i = 0; i <= 70; i++)
        memo[i] = -1;

    memo[0] = 10;
    memo[1] = 11;
    memo[2] = 27;

    // leitura até EOF (permitido pelo enunciado)
    while (scanf("%d", &x) != EOF) {
        printf("%lld\n", f(x));
    }

    return 0;
}
