#include <stdio.h>

int conta(int pos, int n, int d, int caras, int coroas) {
    if (pos == n) {
        if (caras - coroas == d || coroas - caras == d) {
            return 1;
        }
        return 0;
    }

    return conta(pos + 1, n, d, caras + 1, coroas) +   // escolhe Cara
           conta(pos + 1, n, d, caras, coroas + 1);   // escolhe Coroa
}

int main() {
    int N, D;
    scanf("%d %d", &N, &D);

    int resultado = conta(0, N, D, 0, 0);
    printf("%d\n", resultado);

    return 0;
}
