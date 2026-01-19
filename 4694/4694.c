#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[51];
    float preco;
    int qtd;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    struct Produto estoque[100];
    for (int i = 0; i < n; i++) {
        scanf("%d %50s %f %d", &estoque[i].codigo, estoque[i].nome, &estoque[i].preco, &estoque[i].qtd);
    }

    int m;
    scanf("%d", &m);

    while (m--) {
        char operacao[10];
        scanf("%s", operacao);

        if (strcmp(operacao, "Venda") == 0) {
            int x;
            scanf("%d", &x);

            int cods_compra[100], qtds_compra[100];
            int possivel = 1;
            float total = 0;

            // Primeiro verificamos se toda a venda é possível
            for (int i = 0; i < x; i++) {
                scanf("%d %d", &cods_compra[i], &qtds_compra[i]);
                
                // Buscar produto no estoque
                int achou = 0;
                for (int j = 0; j < n; j++) {
                    if (estoque[j].codigo == cods_compra[i]) {
                        achou = 1;
                        if (estoque[j].qtd < qtds_compra[i]) possivel = 0;
                        total += estoque[j].preco * qtds_compra[i];
                        break;
                    }
                }
                if (!achou) possivel = 0;
            }

            float pago;
            scanf("%f", &pago);

            if (possivel && pago >= total) {
                // Efetivar venda e imprimir nota
                for (int i = 0; i < x; i++) {
                    for (int j = 0; j < n; j++) {
                        if (estoque[j].codigo == cods_compra[i]) {
                            printf("%s - R$%.2f - %d - R$%.2f\n", estoque[j].nome, estoque[j].preco, qtds_compra[i], estoque[j].preco * qtds_compra[i]);
                            estoque[j].qtd -= qtds_compra[i]; // Atualiza estoque
                            break;
                        }
                    }
                }
                printf("Total: R$%.2f\n", total);
                printf("Pago: R$%.2f\n", pago);
                printf("Troco: R$%.2f\n", pago - total);
            } else {
                printf("Nao foi possivel realizar a venda\n");
            }

        } else if (strcmp(operacao, "Estoque") == 0) {
            // Criar cópia para ordenar sem bagunçar a ordem original (opcional, mas bom para lógica)
            struct Produto estoque_ordenado[100];
            for(int i=0; i<n; i++) estoque_ordenado[i] = estoque[i];

            // Ordenação Lexicográfica (Bubble Sort pelo nome)
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (strcmp(estoque_ordenado[j].nome, estoque_ordenado[j+1].nome) > 0) {
                        struct Produto temp = estoque_ordenado[j];
                        estoque_ordenado[j] = estoque_ordenado[j+1];
                        estoque_ordenado[j+1] = temp;
                    }
                }
            }

            printf("Estoque atual:\n");
            for (int i = 0; i < n; i++) {
                printf("%d. %d - %s - %d\n", i + 1, estoque_ordenado[i].codigo, estoque_ordenado[i].nome, estoque_ordenado[i].qtd);
            }
        }
    }

    return 0;
}