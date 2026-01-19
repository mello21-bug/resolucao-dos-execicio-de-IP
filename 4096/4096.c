#include <stdio.h>
#include <string.h>

// Definição da estrutura para o produto
struct produto {
    int codigo;
    char descricao[100];
    float preco;
};

int main() {
    int n;

    // 1. Início do cadastro
    printf("Digite a quantidade de produtos a serem cadastrados:\n");
    if (scanf("%d", &n) != 1) return 0;

    struct produto cardapio[n];

    printf("Digite o codigo, descricao e preco dos %d produtos:\n", n);
    for (int i = 0; i < n; i++) {
        // Leitura direta para a struct dentro do array
        scanf("%d", &cardapio[i].codigo);
        scanf(" %[^\n]", cardapio[i].descricao);
        scanf("%f", &cardapio[i].preco);
    }

    // 2. Início dos pedidos
    printf("Digite o(s) codigo(s) e a quantidade do(s) produto(s) desejado(s):\n");
    
    int codPedido, qtdPedido;
    int totalItens = 0;
    float totalConta = 0.0;

    // Loop de leitura de pedidos até que o código seja 0
    while (scanf("%d", &codPedido) == 1 && codPedido != 0) {
        scanf("%d", &qtdPedido);

        // Validação 1: Quantidade deve ser positiva
        if (qtdPedido > 0) {
            int encontrado = 0;
            
            // Busca manual do código no cardápio (substituindo a função retornaPreco)
            for (int i = 0; i < n; i++) {
                if (cardapio[i].codigo == codPedido) {
                    totalItens += qtdPedido;
                    totalConta += (cardapio[i].preco * qtdPedido);
                    encontrado = 1;
                    break; // Sai do loop de busca assim que encontrar o produto
                }
            }
            // Se 'encontrado' continuar 0, o código não existe e o pedido é ignorado
        }
    }

    // 3. Saída formatada
    printf("Quantidade de itens do seu pedido: %d\n", totalItens);
    printf("Total a pagar: %.2f\n", totalConta);

    return 0;
}