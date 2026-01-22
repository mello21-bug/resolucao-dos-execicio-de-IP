#include <stdio.h>

int tempo(int v[], int n, int i, int acc) {
    if (i == n)
        return acc;

    if (v[i] == -1)
        return acc * 2 + 2;

    return tempo(v, n, i + 1, acc + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int resultado = tempo(v, n, 0, 0);
    printf("%d\n", resultado);

    return 0;
}
