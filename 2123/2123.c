#include <stdio.h>

int pode_comprar(int C, int M, int P) {
    if (C == 0)
        return 1;

    if (M < P)
        return 0;

    return pode_comprar(C - 1, M - P, P);
}

int main() {
    int C, M, P;

    while (scanf("%d %d %d", &C, &M, &P) == 3) {
        if (pode_comprar(C, M, P))
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}
