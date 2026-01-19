#include <stdio.h>
#include <math.h>

// Estrutura para agrupar os três números de entrada
struct Numeros {
    double n1;
    double n2;
    double n3;
};

int main() {
    struct Numeros valores;
    double somaQuadrados, quadradoSoma;

    // Leitura dos dados sem mensagens de texto (conforme solicitado)
    if (scanf("%lf %lf %lf", &valores.n1, &valores.n2, &valores.n3) == 3) {
        
        // a) Soma dos quadrados: (n1²) + (n2²) + (n3²)
        somaQuadrados = pow(valores.n1, 2) + pow(valores.n2, 2) + pow(valores.n3, 2);
        
        // b) Quadrado da soma: (n1 + n2 + n3)²
        double somaSimples = valores.n1 + valores.n2 + valores.n3;
        quadradoSoma = pow(somaSimples, 2);

        // Saída conforme o formato do exemplo
        printf("%.1f\n", somaQuadrados);
        printf("%.1f\n", quadradoSoma);
    }

    return 0;
}