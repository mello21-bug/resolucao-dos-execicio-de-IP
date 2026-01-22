#include <stdio.h>

void imprimeColuna(int atual, int total, int porLinha) {
    if (atual > total) {
        return;
    }

    printf("%d\n", atual);
    imprimeColuna(atual + porLinha, total, porLinha);
}

int main() {
    int total, porLinha, coluna;
    scanf("%d %d %d", &total, &porLinha, &coluna);

    imprimeColuna(coluna, total, porLinha);

    return 0;
}
