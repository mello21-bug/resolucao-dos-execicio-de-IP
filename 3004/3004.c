#include <stdio.h>

int soma_forca(int v[], int ini, int fim) {
    // Caso base: apenas um elemento
    if (ini == fim) {
        if (v[ini] > 10)
            return v[ini];
        else
            return 0;
    }

    // Divide o array em duas partes
    int meio = (ini + fim) / 2;

    int soma_esq = soma_forca(v, ini, meio);
    int soma_dir = soma_forca(v, meio + 1, fim);

    return soma_esq + soma_dir;
}

int main() {
    int N;
    scanf("%d", &N);

    int v[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    if (N == 0) {
        printf("0\n");
    } else {
        int resultado = soma_forca(v, 0, N - 1);
        printf("%d\n", resultado);
    }

    return 0;
}
