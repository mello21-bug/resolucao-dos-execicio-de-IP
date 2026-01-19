#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char descricao[100];
    float preco;
};

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // limpa \n

    struct Produto produtos[n];

    // Cadastro dos produtos
    for (int i = 0; i < n; i++) {
        scanf("%d", &produtos[i].codigo);
        getchar();

        fgets(produtos[i].descricao, 100, stdin);
        produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = '\0';

        scanf("%f", &produtos[i].preco);
        getchar();
    }

    float total = 0.0;
    int codigoPedido, quantidade;

    // Leitura dos pedidos
    while (1) {
        scanf("%d", &codigoPedido);

        if (codigoPedido == 0) {
            break;
        }

        scanf("%d", &quantidade);

        // Pedido inválido: quantidade negativa
        if (quantidade < 0) {
            continue;
        }

        // Procurar produto pelo código
        int encontrado = 0;
        for (int i = 0; i < n; i++) {
            if (produtos[i].codigo == codigoPedido) {
                total += produtos[i].preco * quantidade;
                encontrado = 1;
                break;
            }
        }

        // Se não encontrou o produto, ignora (pedido inválido)
        if (!encontrado) {
            continue;
        }
    }

    printf("%.2f\n", total);

    return 0;
}
