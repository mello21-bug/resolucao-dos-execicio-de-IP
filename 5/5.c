#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int f1[10000], f2[10000];
    int i;

    for (i = 0; i < n; i++) scanf("%d", &f1[i]);
    for (i = 0; i < m; i++) scanf("%d", &f2[i]);

    int base[20000], extra[20000];
    int baseSize = 0, extraSize = 0;

    // k = 1 → fila 1 virou extra
    if (k == 1) {
        for (i = 0; i < m; i++) base[baseSize++] = f2[i];
        for (i = 0; i < n; i++) extra[extraSize++] = f1[i];
    }
    // k = 2 → fila 2 virou extra
    else {
        for (i = 0; i < n; i++) base[baseSize++] = f1[i];
        for (i = 0; i < m; i++) extra[extraSize++] = f2[i];
    }

    int iBase = 0, iExtra = 0;

    // imprime o primeiro da fila base
    printf("%d\n", base[iBase]);
    iBase++;

    // intercala a partir da segunda posição
    while (iBase < baseSize || iExtra < extraSize) {
        if (iExtra < extraSize) {
            printf("%d\n", extra[iExtra]);
            iExtra++;
        }
        if (iBase < baseSize) {
            printf("%d\n", base[iBase]);
            iBase++;
        }
    }

    return 0;
}
