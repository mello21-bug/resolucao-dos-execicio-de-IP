#include <stdio.h>
#include <string.h>

#define PI 3.14

double areaQuadrado(double lado) {
    if (lado < 0) return -1;
    return lado * lado;
}

double areaRetangulo(double base, double altura) {
    if (base < 0 || altura < 0) return -1;
    return base * altura;
}

double areaCirculo(double raio) {
    if (raio < 0) return -1;
    return PI * raio * raio;
}

int main() {
    char tipo[10];

    double maiorQ = -1;
    double maiorR = -1;
    double maiorC = -1;

    int total = 0;
    int qtdCirculo = 0;

    while (1) {
        scanf("%s", tipo);

        if (strcmp(tipo, "sair") == 0) {
            break;
        }

        total++;

        if (tipo[0] == 'q') {
            double lado;
            scanf("%lf", &lado);
            double area = areaQuadrado(lado);
            if (area > maiorQ) maiorQ = area;
        }
        else if (tipo[0] == 'r') {
            double b, h;
            scanf("%lf %lf", &b, &h);
            double area = areaRetangulo(b, h);
            if (area > maiorR) maiorR = area;
        }
        else if (tipo[0] == 'c') {
            double raio;
            scanf("%lf", &raio);
            double area = areaCirculo(raio);
            if (area > maiorC) maiorC = area;
            qtdCirculo++;
        }
    }

    double percentual = 0.0;
    if (total > 0) {
        percentual = (qtdCirculo * 100.0) / total;
    }

    printf("Maior circulo: %.2lf\n", maiorC);
    printf("Maior retangulo: %.2lf\n", maiorR);
    printf("Maior quadrado: %.2lf\n", maiorQ);
    printf("Quantidade de figuras %d\n", total);
    printf("Percentual de circulos: %.2lf\n", percentual);

    return 0;
}
