#include <stdio.h>

int main() {
    int par[5], impar[5];
    int i_par = 0, i_impar = 0;
    int n, i;

    for (i = 0; i < 15; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            par[i_par] = n;
            i_par++;

            // Se encheu o vetor par, imprime e zera
            if (i_par == 5) {
                for (int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, par[j]);
                i_par = 0;
            }

        } else {
            impar[i_impar] = n;
            i_impar++;

            // Se encheu o vetor impar, imprime e zera
            if (i_impar == 5) {
                for (int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, impar[j]);
                i_impar = 0;
            }
        }
    }

    // Imprime o que restou nos vetores, na ordem pedida
    for (i = 0; i < i_impar; i++)
        printf("impar[%d] = %d\n", i, impar[i]);

    for (i = 0; i < i_par; i++)
        printf("par[%d] = %d\n", i, par[i]);

    return 0;
}
