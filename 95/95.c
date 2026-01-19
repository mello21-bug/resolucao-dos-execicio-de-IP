#include <stdio.h>
#include <string.h>

// Estrutura para os produtos
struct Produto {
    char nome[30];
    float preco;
    int comprado; // Marcador para saber se o item foi selecionado
};

int main() {
    float dinheiro;
    int n;

    if (scanf("%f", &dinheiro) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;

    struct Produto lista[100];

    for (int i = 0; i < n; i++) {
        scanf("%s %f", lista[i].nome, &lista[i].preco);
        lista[i].comprado = 0; // Inicializa como não comprado
    }

    // 1. Ordenar por PREÇO (Crescente) para aplicar o Algoritmo Guloso
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lista[j].preco > lista[j+1].preco) {
                struct Produto temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }

    // 2. Selecionar os itens mais baratos que cabem no orçamento
    for (int i = 0; i < n; i++) {
        if (dinheiro >= lista[i].preco) {
            dinheiro -= lista[i].preco;
            lista[i].comprado = 1;
        }
    }

    // 3. Ordenar os itens selecionados por NOME (Ordem Alfabética) para a saída
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(lista[j].nome, lista[j+1].nome) > 0) {
                struct Produto temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }

    // 4. Imprimir apenas os comprados e o troco final
    for (int i = 0; i < n; i++) {
        if (lista[i].comprado) {
            printf("%s %.2f\n", lista[i].nome, lista[i].preco);
        }
    }
    printf("%.2f\n", dinheiro);

    return 0;
}