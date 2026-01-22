#include <stdio.h>

#define META 10000000

long long arrecadacao(int x, int M) {
    if (x == 0) return 0;

    if (x % 2 == 0)
        return x + arrecadacao(x - 1, M);
    else
        return M + arrecadacao(x - 1, M);
}

int pessoas_minimas(int x, int M) {
    if (arrecadacao(x, M) >= META)
        return x;

    return pessoas_minimas(x + 1, M);
}

int main() {
    int M;
    scanf("%d", &M);

    int resultado = pessoas_minimas(0, M);

    printf("%d pessoas precisam assistir ao jogo.\n", resultado);

    return 0;
}
