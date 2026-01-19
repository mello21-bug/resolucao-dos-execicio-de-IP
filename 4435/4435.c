#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[31];
    int d;
    int a;
    int id_input;
} Brinquedo;

typedef struct {
    int valor;
    int id_brinquedo;
} Opcao;

int main() {
    Brinquedo b[3];
    Opcao opcoes[9];
    int k = 0;

    // Leitura dos 3 brinquedos
    for (int i = 0; i < 3; i++) {
        scanf(" %[^\n]", b[i].nome);
        scanf("%d %d", &b[i].d, &b[i].a);
        b[i].id_input = i;

        // Calcula a diversão para t = 0, 1 e 2
        for (int t = 0; t < 3; t++) {
            opcoes[k].valor = b[i].d - (t * t * b[i].a);
            opcoes[k].id_brinquedo = i;
            k++;
        }
    }

    // Ordenação das 9 opções (Bubble Sort)
    // Critério: Valor decrescente. Empate: id_input crescente (prioridade do input)
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            int troca = 0;
            if (opcoes[j].valor < opcoes[j+1].valor) {
                troca = 1;
            } else if (opcoes[j].valor == opcoes[j+1].valor) {
                // Se diversão igual, prioridade para quem veio primeiro no input
                if (opcoes[j].id_brinquedo > opcoes[j+1].id_brinquedo) {
                    troca = 1;
                }
            }
            
            if (troca) {
                Opcao temp = opcoes[j];
                opcoes[j] = opcoes[j+1];
                opcoes[j+1] = temp;
            }
        }
    }

    // Soma as 3 melhores e conta as idas
    int diversao_total = 0;
    int contagem[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        diversao_total += opcoes[i].valor;
        contagem[opcoes[i].id_brinquedo]++;
    }

    printf("a maior diversao foi: %d\n", diversao_total);
    printf("indo nos brinquedos: ");

    // Lógica de exibição: prioridade por quem mais andou
    // Se empate na quantidade (1, 1, 1), segue a ordem do input
    int impressos = 0;
    
    // Primeiro verificamos se alguém foi 3 ou 2 vezes (maior frequência)
    for (int freq = 3; freq >= 1; freq--) {
        for (int i = 0; i < 3; i++) {
            if (contagem[i] == freq) {
                if (impressos > 0) printf(", ");
                printf("%s %d vez%s", b[i].nome, contagem[i], contagem[i] > 1 ? "es" : "");
                impressos++;
            }
        }
        if (impressos >= 1 && freq == 3) break; // Se alguém foi 3 vezes, acabou
    }
    printf(".\n");

    return 0;
}