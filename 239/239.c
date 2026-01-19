#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

// Função de comparação para o qsort
int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    // 1º Critério: Cor (Ascendente: Branco antes de Vermelho)
    int compCor = strcmp(c1->cor, c2->cor);
    if (compCor != 0) return compCor;

    // 2º Critério: Tamanho (Descendente: P > M > G lexicograficamente)
    // Nota: O problema pede ordem descendente das letras P, M, G.
    if (c1->tamanho != c2->tamanho) {
        return c2->tamanho - c1->tamanho; 
    }

    // 3º Critério: Nome (Ascendente)
    return strcmp(c1->nome, c2->nome);
}

int main() {
    int n, primeiro = 1;

    while (scanf("%d", &n) && n != 0) {
        // Linha em branco entre casos de teste
        if (!primeiro) printf("\n");
        primeiro = 0;

        Camiseta lista[n];

        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]s", lista[i].nome);
            scanf("%s %c", lista[i].cor, &lista[i].tamanho);
        }

        // Ordenação usando a função de comparação
        qsort(lista, n, sizeof(Camiseta), comparar);

        // Impressão dos resultados
        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", lista[i].cor, lista[i].tamanho, lista[i].nome);
        }
    }

    return 0;
}