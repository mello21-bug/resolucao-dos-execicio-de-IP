#include <stdio.h>
#include <string.h>

int main() {
    float a, b, resultado;
    char operacao[20];

    // Leitura dos números
    scanf("%f", &a);
    scanf("%f", &b);

    // Leitura da operação
    scanf("%s", operacao);

    // Decisão da operação
    if (strcmp(operacao, "soma") == 0) {
        resultado = a + b;
    } else if (strcmp(operacao, "subtracao") == 0) {
        resultado = a - b;
    } else if (strcmp(operacao, "multiplicacao") == 0) {
        resultado = a * b;
    } else if (strcmp(operacao, "divisao") == 0) {
        resultado = a / b;
    }

    // Saída formatada
    printf("resultado = %.2f\n", resultado);

    return 0;
}
