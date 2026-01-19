#include <stdio.h>
#include <string.h>

// Estrutura principal para os vendedores
typedef struct {
    char nome[51];
    float vendas;
    int unidade;
    char gerente[51];
} Vendedor;

// Função para buscar o melhor e o pior vendedor
void buscarMelhorPior(Vendedor vetor[], int tamanho, Vendedor melhorpior[]) {
    int indiceMelhor = 0;
    int indicePior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i].vendas > vetor[indiceMelhor].vendas) {
            indiceMelhor = i;
        }
        if (vetor[i].vendas < vetor[indicePior].vendas) {
            indicePior = i;
        }
    }

    // melhorpior[0] armazena o melhor, melhorpior[1] armazena o pior
    melhorpior[0] = vetor[indiceMelhor];
    melhorpior[1] = vetor[indicePior];
}

// Função para buscar um vendedor pelo nome
void buscarVendendor(char nome[], Vendedor vetor[], int tamanho) {
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(vetor[i].nome, nome) == 0) {
            printf("Nome: %s\n", vetor[i].nome);
            printf("Vendas: R$ %.2f\n", vetor[i].vendas);
            printf("Unidade: %d\n", vetor[i].unidade);
            printf("Gerente: %s\n\n", vetor[i].gerente);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("NAO ENCONTRADO\n\n");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    Vendedor cadastro[50];
    Vendedor destaque[2]; // Destaque[0] = Melhor, Destaque[1] = Pior

    // Leitura dos dados
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s", cadastro[i].nome);
        scanf("%f", &cadastro[i].vendas);
        scanf("%d", &cadastro[i].unidade);
        scanf(" %[^\n]s", cadastro[i].gerente);
    }

    // Processa melhor e pior
    buscarMelhorPior(cadastro, n, destaque);

    // Saída do Melhor e Pior
    printf("Melhor vendedor: %s\n", destaque[0].nome);
    printf("Vendas: R$ %.2f\n", destaque[0].vendas);
    printf("Unidade: %d\n", destaque[0].unidade);
    printf("Gerente: %s\n\n", destaque[0].gerente);

    printf("Pior vendedor: %s\n", destaque[1].nome);
    printf("Vendas: R$ %.2f\n", destaque[1].vendas);
    printf("Unidade: %d\n", destaque[1].unidade);
    printf("Gerente: %s\n\n", destaque[1].gerente);

    // Busca por nomes até ler "ok"
    char nomeBusca[51];
    while (scanf(" %[^\n]s", nomeBusca) && strcmp(nomeBusca, "ok") != 0) {
        buscarVendendor(nomeBusca, cadastro, n);
    }

    return 0;
}
