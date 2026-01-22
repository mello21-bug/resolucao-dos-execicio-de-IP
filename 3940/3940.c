#include <stdio.h>

double calculaSalario(double salarioMin, int pecas) {
    double salario = salarioMin;

    if (pecas > 30 && pecas <= 41) {
        salario += (pecas - 30) * (0.03 * salarioMin);
    } 
    else if (pecas > 41) {
        salario += (pecas - 30) * (0.05 * salarioMin);
    }

    return salario;
}

int main() {
    double salarioMin;
    int p1, p2, p3;
    double s1, s2, s3;
    int totalPecas;
    double mediaPecas;
    double maiorSalario;

    scanf("%lf", &salarioMin);
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);

    s1 = calculaSalario(salarioMin, p1);
    s2 = calculaSalario(salarioMin, p2);
    s3 = calculaSalario(salarioMin, p3);

    totalPecas = p1 + p2 + p3;
    mediaPecas = totalPecas / 3.0;

    maiorSalario = s1;
    if (s2 > maiorSalario) maiorSalario = s2;
    if (s3 > maiorSalario) maiorSalario = s3;

    printf("Salario 1: %.2f\n", s1);
    printf("Salario 2: %.2f\n", s2);
    printf("Salario 3: %.2f\n", s3);
    printf("Total de pecas fabricadas: %d\n", totalPecas);
    printf("Media de pecas fabricadas: %.2f\n", mediaPecas);
    printf("Maior salario: %.2f\n", maiorSalario);

    return 0;
}
