#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada sala
typedef struct {
    int id;
    int aprovados;
    int ordem_entrada; // Para garantir estabilidade no desempate
} Sala;

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    Sala salas[n];

    for (int i = 0; i < n; i++) {
        int id_sala, q_alunos;
        scanf("%d %d", &id_sala, &q_alunos);

        salas[i].id = id_sala;
        salas[i].aprovados = 0;
        salas[i].ordem_entrada = i;

        for (int j = 0; j < q_alunos; j++) {
            char nome[100];
            float presenca;
            int n1, n2, n3;
            float medMat, medPort, medHist;

            scanf("%s %f", nome, &presenca);

            // Leitura e cálculo da média de Matemática
            scanf("%d %d %d", &n1, &n2, &n3);
            medMat = (n1 + n2 + n3) / 3.0;

            // Leitura e cálculo da média de Português
            scanf("%d %d %d", &n1, &n2, &n3);
            medPort = (n1 + n2 + n3) / 3.0;

            // Leitura e cálculo da média de História
            scanf("%d %d %d", &n1, &n2, &n3);
            medHist = (n1 + n2 + n3) / 3.0;

            // Critério de Aprovação:
            // Médias >= 7 em TODAS as matérias E presença >= 0.75
            if (presenca >= 0.75 && medMat >= 7.0 && medPort >= 7.0 && medHist >= 7.0) {
                salas[i].aprovados++;
            }
        }
    }

    // Ordenação (Bubble Sort)
    // Critério: Quantidade de aprovados (Decrescente)
    // Desempate: Ordem de entrada (Mantém a posição original)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int trocar = 0;
            if (salas[j].aprovados < salas[j + 1].aprovados) {
                trocar = 1;
            } else if (salas[j].aprovados == salas[j + 1].aprovados) {
                // Se empatar, a que veio primeiro na entrada (menor índice) fica antes
                if (salas[j].ordem_entrada > salas[j + 1].ordem_entrada) {
                    trocar = 1;
                }
            }

            if (trocar) {
                Sala temp = salas[j];
                salas[j] = salas[j + 1];
                salas[j + 1] = temp;
            }
        }
    }

    // Saída formatada
    for (int i = 0; i < n; i++) {
        printf("%d. [SALA #%d] APROVADOS: %d\n", i + 1, salas[i].id, salas[i].aprovados);
    }

    return 0;
}