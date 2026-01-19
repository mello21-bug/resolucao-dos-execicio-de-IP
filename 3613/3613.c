#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de entrega
typedef struct {
    char nome[41];
    int qtd;
    float valor;
    char cidade[31];
} Venda;

int main() {
    Venda vendas[10]; // Limite de 10 vendas semanais
    int i = 0, total_qtd = 0;
    float total_arrecadado = 0;
    int indice_maior = 0;

    // Loop de leitura até o limite ou a string "encerrar"
    while (i < 10) {
        char temp_nome[41];
        // Lê o nome para verificar se deve encerrar
        if (scanf(" %[^\n]s", temp_nome) == EOF || strcmp(temp_nome, "encerrar") == 0) {
            break;
        }
        
        strcpy(vendas[i].nome, temp_nome);
        scanf("%d", &vendas[i].qtd);
        scanf("%f", &vendas[i].valor);
        scanf(" %[^\n]s", vendas[i].cidade);

        // Acumula os totais da semana
        total_qtd += vendas[i].qtd;
        total_arrecadado += vendas[i].valor;

        // Verifica se esta é a venda de maior valor para o brinde
        if (vendas[i].valor > vendas[indice_maior].valor) {
            indice_maior = i;
        }
        
        i++;
    }

    // Só imprime resultados se houver pelo menos uma venda
    if (i > 0) {
        printf("Quantidade vendida: %d\n", total_qtd);
        printf("Valor arrecadado: %.2f\n", total_arrecadado);
        printf("%s\n", vendas[indice_maior].nome);
        printf("%s\n", vendas[indice_maior].cidade);
    }

    return 0;
}