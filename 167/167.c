#include <stdio.h>

int main() {
    int v[10000];   // tamanho suficiente para testes comuns
    int voto, n = 0;

    // lê até -1
    while (1) {
        scanf("%d", &voto);
        if (voto == -1) break;
        v[n] = voto;
        n++;
    }

    int ali = 0, alca = 0, branco = 0, nulo = 0;

    // conta os votos
    for (int i = 0; i < n; i++) {
        if (v[i] == 83) ali++;
        else if (v[i] == 93) alca++;
        else if (v[i] == 0) branco++;
        else nulo++;
    }

    int validos = ali + alca + branco;

    float pAli = ali * 100.0 / validos;
    float pAlca = alca * 100.0 / validos;

    printf("%d\n", ali);
    printf("%d\n", alca);
    printf("%d\n", branco);
    printf("%d\n", nulo);

    if (ali > alca) printf("83\n");
    else printf("93\n");

    printf("%.2f\n", pAli);
    printf("%.2f\n", pAlca);

    return 0;
}