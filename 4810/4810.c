#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char nome[100], melhorLugar[100];
    double P, G, T;
    double nota, maiorNota = -1.0;
    int bons = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %lf %lf %lf", nome, &P, &G, &T);

        nota = (3.0 * P + G + 2.0 * T) / 6.0;

        if (nota >= 3.5) {
            bons++;
            if (nota > maiorNota) {
                maiorNota = nota;
                strcpy(melhorLugar, nome);
            }
        }
    }

    if (bons == 0) {
        printf("Puts. Melhor ficar em casa mesmo");
    } else {
        printf("Temos %d lugares pra visitar!\n", bons);
        printf("Devo comecar por %s", melhorLugar);
    }

    return 0;
}
