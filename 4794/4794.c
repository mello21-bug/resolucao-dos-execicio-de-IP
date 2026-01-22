#include <stdio.h>

/* Função que calcula quantos sorvetes foram comidos */
int calculaSorvetes(int tempo, int T) {
    return tempo / T;
}

int main() {
    int B, K, T;

    scanf("%d %d", &B, &K);
    scanf("%d", &T);

    int sorvetesB = calculaSorvetes(B, T);
    int sorvetesK = calculaSorvetes(K, T);

    printf("Badtz-Maru comeu %d sorvetes.\n", sorvetesB);
    printf("Keroppi comeu %d sorvetes.\n", sorvetesK);

    return 0;
}
