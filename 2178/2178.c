#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    float v[n];
    float soma = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    float media = soma / n;

    float soma_quadrados = 0;
    for (int i = 0; i < n; i++) {
        soma_quadrados += pow((v[i] - media), 2) ;
    }

    float desvio = sqrt(soma_quadrados / (n-1));

    printf("%.2f\n", desvio);

    return 0;
}
