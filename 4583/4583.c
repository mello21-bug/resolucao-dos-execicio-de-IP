#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os detalhes de cada corrida restante
typedef struct {
    char nome[50];
    int pos_marquinhos;
    int pos_luis;
} Corrida;

// Função para retornar a pontuação da F1 baseada na posição
int calcular_pontos(int posicao) {
    if (posicao == 1) return 25;
    if (posicao == 2) return 18;
    if (posicao == 3) return 15;
    if (posicao == 4) return 12;
    if (posicao == 5) return 10;
    if (posicao == 6) return 8;
    if (posicao == 7) return 6;
    if (posicao == 8) return 4;
    if (posicao == 9) return 2;
    if (posicao == 10) return 1;
    return 0; // Posições acima de 10 não pontuam
}

int main() {
    int pontos_m, pontos_l, n;
    
    // Leitura das pontuações atuais e número de corridas
    if (scanf("%d %d %d", &pontos_m, &pontos_l, &n) != 3) return 0;

    Corrida corridas[n];
    int vitorias_confronto_m = 0;
    int vitorias_confronto_l = 0;

    // Processamento das corridas restantes
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", corridas[i].nome, &corridas[i].pos_marquinhos, &corridas[i].pos_luis);
        
        // Soma os pontos de cada piloto na corrida atual
        pontos_m += calcular_pontos(corridas[i].pos_marquinhos);
        pontos_l += calcular_pontos(corridas[i].pos_luis);

        // Contabiliza quem ficou à frente para critério de desempate
        if (corridas[i].pos_marquinhos < corridas[i].pos_luis) vitorias_confronto_m++;
        else if (corridas[i].pos_luis < corridas[i].pos_marquinhos) vitorias_confronto_l++;
    }

    // Determinação do vencedor
    char vencedor[15];
    int diferenca;
    int m_venceu = 0;

    if (pontos_m > pontos_l) {
        m_venceu = 1;
    } else if (pontos_l > pontos_m) {
        m_venceu = 0;
    } else {
        // Critério de desempate: quem ficou à frente em mais corridas
        m_venceu = (vitorias_confronto_m > vitorias_confronto_l);
    }

    // Impressão do resultado formatado
    if (m_venceu) {
        diferenca = pontos_m - pontos_l;
        printf("O vencedor e Marquinhos com %d pontos a mais, ficando a frente em ", diferenca);
        for (int i = 0; i < n; i++) {
            if (corridas[i].pos_marquinhos < corridas[i].pos_luis) printf("%s/", corridas[i].nome);
        }
    } else {
        diferenca = pontos_l - pontos_m;
        printf("O vencedor e Luis com %d pontos a mais, ficando a frente em ", diferenca);
        for (int i = 0; i < n; i++) {
            if (corridas[i].pos_luis < corridas[i].pos_marquinhos) printf("%s/", corridas[i].nome);
        }
    }
    printf("\n");

    return 0;
}