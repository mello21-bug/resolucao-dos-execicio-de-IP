#define _USE_MATH_DEFINES // Garante que o M_PI seja habilitado em alguns compiladores
#include <stdio.h>
#include <math.h>

// Definição da estrutura
struct Lata {
    double raio;
    double altura;
    double volume; // Agora declarada dentro da struct
};

int main() {
    struct Lata lata;

    // Leitura dos dados
    if (scanf("%lf %lf", &lata.raio, &lata.altura) == 2) {
        
        // Cálculo do volume
        // Caso M_PI não funcione no seu compilador, use: acos(-1.0)
        lata.volume = M_PI * pow(lata.raio, 2) * lata.altura;

        // Saída do resultado
        printf("%.15f\n", lata.volume);
    }

    return 0;
}