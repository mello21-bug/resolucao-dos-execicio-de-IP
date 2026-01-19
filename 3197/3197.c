#include <stdio.h>

// Definindo a estrutura para representar o lote de produtos
struct LoteRefrigerante {
    int qtd2L;
    int qtd600ml;
    int qtd350ml;
    double totalLitros; // Resultado armazenado na estrutura
};

int main() {
    struct LoteRefrigerante pedido;

    // Leitura das quantidades (2L, 600ml, 350ml)
    if (scanf("%d %d %d", &pedido.qtd2L, &pedido.qtd600ml, &pedido.qtd350ml) == 3) {
        
        // Cálculo centralizado nos membros da struct
        // Multiplicamos pelas proporções em litros: 2.0, 0.6 e 0.35
        pedido.totalLitros = (pedido.qtd2L * 2.0) + 
                             (pedido.qtd600ml * 0.6) + 
                             (pedido.qtd350ml * 0.35);

        // Saída do resultado formatado
        printf("%.1f\n", pedido.totalLitros);
    }

    return 0;
}