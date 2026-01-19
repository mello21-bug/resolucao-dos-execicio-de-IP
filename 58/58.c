#include <stdio.h>

// Estrutura para representar cada país e seu desempenho
struct Pais {
    int id;
    int ouro;
    int prata;
    int bronze;
};

int main() {
    int n, m;
    
    // Leitura do número de países (N) e modalidades (M)
    if (scanf("%d %d", &n, &m) != 2) return 0;

    struct Pais paises[101];

    // Inicializa os países com seus IDs e zerando as medalhas
    for (int i = 1; i <= n; i++) {
        paises[i-1].id = i;
        paises[i-1].ouro = 0;
        paises[i-1].prata = 0;
        paises[i-1].bronze = 0;
    }

    // Leitura das medalhas por modalidade
    for (int i = 0; i < m; i++) {
        int o, p, b;
        scanf("%d %d %d", &o, &p, &b);
        // Incrementa as medalhas nos países correspondentes (ajustando o índice para 0..n-1)
        paises[o-1].ouro++;
        paises[p-1].prata++;
        paises[b-1].bronze++;
    }

    // Ordenação (Bubble Sort com critérios de desempate)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int trocar = 0;

            // Critério 1: Ouro (Decrescente)
            if (paises[j].ouro < paises[j+1].ouro) {
                trocar = 1;
            } else if (paises[j].ouro == paises[j+1].ouro) {
                
                // Critério 2: Prata (Decrescente)
                if (paises[j].prata < paises[j+1].prata) {
                    trocar = 1;
                } else if (paises[j].prata == paises[j+1].prata) {
                    
                    // Critério 3: Bronze (Decrescente)
                    if (paises[j].bronze < paises[j+1].bronze) {
                        trocar = 1;
                    } else if (paises[j].bronze == paises[j+1].bronze) {
                        
                        // Critério 4: Menor ID (Crescente)
                        if (paises[j].id > paises[j+1].id) {
                            trocar = 1;
                        }
                    }
                }
            }

            if (trocar) {
                struct Pais temp = paises[j];
                paises[j] = paises[j+1];
                paises[j+1] = temp;
            }
        }
    }

    // Impressão do resultado final (apenas os IDs na ordem correta)
    for (int i = 0; i < n; i++) {
        printf("%d\n", paises[i].id);
    }

    return 0;
}