#include <stdio.h>
#include <string.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        getchar(); // limpa o '\n' do buffer

        if (n == 0)
            break;

        char nomes[300][101];
        char aux[101];

        // Leitura dos nomes
        for (int i = 0; i < n; i++) {
            fgets(nomes[i], sizeof(nomes[i]), stdin);
            nomes[i][strcspn(nomes[i], "\n")] = '\0'; // remove '\n'
        }

        // Ordenação alfabética (Bubble Sort)
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(nomes[i], nomes[j]) > 0) {
                    strcpy(aux, nomes[i]);
                    strcpy(nomes[i], nomes[j]);
                    strcpy(nomes[j], aux);
                }
            }
        }

        // Saída
        for (int i = 0; i < n; i++) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
