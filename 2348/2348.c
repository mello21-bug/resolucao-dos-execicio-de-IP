#include <stdio.h>

int busca(int x, int L[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (L[i] == x) {
            return 1; // True
        }
    }
    return 0; // False
}

int main() {
    int x, n, i;

    scanf("%d", &x);
    scanf("%d", &n);

    int lista[n]; // vetor criado já com o tamanho necessário

    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    if (busca(x, lista, n)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
