#include <stdio.h>

void visitar(int v, int liga[], int visitado[]) {
    if (visitado[v]) 
        return;

    visitado[v] = 1;
    visitar(liga[v], liga, visitado);
}

int main() {
    int N;
    scanf("%d", &N);

    int liga[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &liga[i]);
    }

    int visitado[N];
    for (int i = 0; i < N; i++)
        visitado[i] = 0;

    int tocas = 0;

    for (int i = 0; i < N; i++) {
        if (!visitado[i]) {
            visitar(i, liga, visitado);
            tocas++;  // cada chamada completa um ciclo → uma toca
        }
    }

    printf("%d\n", tocas);
    return 0;
}
