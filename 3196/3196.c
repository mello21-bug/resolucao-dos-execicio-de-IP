#include <stdio.h>

// Estrutura para armazenar a quantidade de cada nota
struct Notas {
    int n100, n50, n20, n10, n5, n2, n1;
};

int main() {
    int preco;
    struct Notas pagamento;

    // Leitura do preço sem mensagem (conforme solicitado)
    if (scanf("%d", &preco) == 1) {
        
        // Processamento guloso: maior para a menor nota
        pagamento.n100 = preco / 100;
        preco %= 100;

        pagamento.n50 = preco / 50;
        preco %= 50;

        pagamento.n20 = preco / 20;
        preco %= 20;

        pagamento.n10 = preco / 10;
        preco %= 10;

        pagamento.n5 = preco / 5;
        preco %= 5;

        pagamento.n2 = preco / 2;
        preco %= 2;

        pagamento.n1 = preco; // O que sobrar são as notas de 1

        // Saída dos resultados na ordem solicitada
        printf("%d\n", pagamento.n100);
        printf("%d\n", pagamento.n50);
        printf("%d\n", pagamento.n20);
        printf("%d\n", pagamento.n10);
        printf("%d\n", pagamento.n5);
        printf("%d\n", pagamento.n2);
        printf("%d\n", pagamento.n1);
    }

    return 0;
}