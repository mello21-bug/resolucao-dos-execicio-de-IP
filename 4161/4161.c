#include <stdio.h>
#include <math.h>

double somaRiemann(double A, double delta, int i, int N) {
    if (i > N) {
        return 0.0;
    }

    double x = A + i * delta;
    return x * x * delta + somaRiemann(A, delta, i + 1, N);
}

int main() {
    double A, B, N;
    double C;

    scanf("%lf %lf %lf", &A, &B, &N);
    scanf("%lf", &C);

    double delta = (B - A) / N;

    double soma = somaRiemann(A, delta, 1, (int)N);

    double eps = 1e-6;

    if (fabs(soma - C) < eps) {
        printf("Igual\n");
    } else if (soma > C) {
        printf("Maior\n");
    } else {
        printf("Menor\n");
    }

    return 0;
}
