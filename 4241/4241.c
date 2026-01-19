#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados do veículo
typedef struct {
    char nome[100];
    double desempenho;
} Carro;

int main() {
    int n;
    
    // Leitura da quantidade de carros
    if (scanf("%d", &n) != 1) return 0;

    Carro oficina[n];
    double soma_desempenhos_geral = 0;

    for (int i = 0; i < n; i++) {
        // Limpa o buffer e lê o nome do modelo (pode conter espaços)
        scanf(" %[^\n]s", oficina[i].nome);
        
        double motor, suspensao, turbo;
        scanf("%lf %lf %lf", &motor, &suspensao, &turbo);

        // Cálculo da Média Ponderada: (M*5 + S*2 + T*3) / (5+2+3)
        // O divisor é 10 (soma dos pesos)
        oficina[i].desempenho = (motor * 5.0 + suspensao * 2.0 + turbo * 3.0) / 10.0;
        
        // Acumula para a média geral
        soma_desempenhos_geral += oficina[i].desempenho;
    }

    // Cálculo da média aritmética geral de todos os carros
    double media_geral = soma_desempenhos_geral / n;

    // Saída: Carros com desempenho >= média geral na ordem de inserção
    for (int i = 0; i < n; i++) {
        if (oficina[i].desempenho >= media_geral) {
            printf("%s\n", oficina[i].nome);
        }
    }

    return 0;
}