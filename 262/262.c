#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float notas[20000];
    float soma = 0;

    
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / n;

    float limite_acima = media * 1.10;  
    float limite_abaixo = media * 0.90; 

    int acima = 0;
    int abaixo = 0;

   
    for (int i = 0; i < n; i++) {
        if (notas[i] > limite_acima)
            acima++;
        if (notas[i] < limite_abaixo)
            abaixo++;
    }

    printf("%.2f\n", media);
    printf("%d\n", acima);
    printf("%d\n", abaixo);

    return 0;
}
