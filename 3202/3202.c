#include <stdio.h>
#include <math.h>

// Estrutura para representar os dados do espetáculo
struct Espetaculo {
    double custo;
    double precoConvite;
};

int main() {
    struct Espetaculo teatro;
    double convitesMinimos, convitesLucro;

    // Leitura dos dados: Custo e Preço do Convite
    if (scanf("%lf %lf", &teatro.custo, &teatro.precoConvite) == 2) {
        
        // a) Quantidade para cobrir o custo
        // ceil garante que, se der 100.1, precisaremos de 101 convites
        convitesMinimos = ceil(teatro.custo / teatro.precoConvite);
        
        // b) Quantidade para lucro de 23%
        // Custo + 23% = Custo * 1.23
        convitesLucro = ceil((teatro.custo * 1.23) / teatro.precoConvite);

        // Saída dos resultados formatados como inteiros (sem casas decimais)
        printf("%.0f\n", convitesMinimos);
        printf("%.0f\n", convitesLucro);
    }

    return 0;
}