#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char nomes[5][101];
    double idadeEntrada;
    int idades[5];

    int soma = 0;
    double mediaAritmetica;
    double mediaGeometrica = 1.0;

    /* Leitura dos dados */
    for (int i = 0; i < 5; i++) {
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        scanf("%lf", &idadeEntrada);
        getchar(); /* consome o '\n' */

        /* Garante idade positiva e inteira */
        idadeEntrada = fabs(idadeEntrada);
        idades[i] = (int) idadeEntrada;
    }

    /* Impressão dos nomes e idades */
    for (int i = 0; i < 5; i++) {
        printf("Pessoa: %s , %d\n", nomes[i], idades[i]);
        soma += idades[i];
        mediaGeometrica *= idades[i];
    }

    /* Cálculo das médias */
    mediaAritmetica = soma / 5.0;
    mediaGeometrica = pow(mediaGeometrica, 1.0 / 5.0);

    /* Saídas finais */
    printf("%d\n", soma);
    printf("%.1lf\n", mediaAritmetica);
    printf("%d\n", (int) mediaGeometrica);

    return 0;
}
