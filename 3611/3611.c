#include <stdio.h>

struct Contato {
    char nomeCompleto[51];
    char numero[16];
    int vinculo;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    struct Contato lista[50];

    // Cadastro
    for (int i = 0; i < n; i++) {
        scanf(" %50[^\n]", lista[i].nomeCompleto);
        scanf(" %15[^\n]", lista[i].numero);
        scanf("%d", &lista[i].vinculo);
    }

    char pesquisa[51];
    // Lemos a pesquisa. Se for '#', o loop encerra.
    while (scanf(" %50[^\n]", pesquisa) && pesquisa[0] != '#') {
        int encontradoTotal = 0;

        for (int i = 0; i < n; i++) {
            // Extração manual do primeiro nome
            char primeiroNome[51];
            int j = 0;
            while (lista[i].nomeCompleto[j] != ' ' && lista[i].nomeCompleto[j] != '\0') {
                primeiroNome[j] = lista[i].nomeCompleto[j];
                j++;
            }
            primeiroNome[j] = '\0';

            // Comparação manual (substituindo strcmp)
            int k = 0;
            int iguais = 1;
            while (primeiroNome[k] != '\0' || pesquisa[k] != '\0') {
                if (primeiroNome[k] != pesquisa[k]) {
                    iguais = 0;
                    break;
                }
                k++;
            }

            if (iguais) {
                printf("Nome: %s\n", lista[i].nomeCompleto);
                printf("Numero: %s\n", lista[i].numero);
                
                if (lista[i].vinculo == 1) printf("Vinculo: Familia\n");
                else if (lista[i].vinculo == 2) printf("Vinculo: Faculdade\n");
                else if (lista[i].vinculo == 3) printf("Vinculo: Amigo\n");
                
                printf("\n"); // Quebra de linha dupla exigida
                encontradoTotal = 1;
            }
        }

        if (!encontradoTotal) {
            printf("%s nao foi cadastrado\n\n", pesquisa); // Também precisa de linha dupla se não achar
        }
    }

    return 0;
}