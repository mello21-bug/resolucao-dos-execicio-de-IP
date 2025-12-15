#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[100][100];
    int pontos[101] = {0};
    int eliminado[101] = {0};

    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (int i = 0; i < M; i++) {
        int competicao = i + 1;

        
        for (int j = 0; j < N; j++) {
            int jogador = mat[i][j];
            int posicao = j + 1;

            if (jogador == competicao && posicao == competicao) {
                if (!(jogador == 1 && competicao == 1)) {
                    eliminado[jogador] = 1;
                }
            }
        }

       
        for (int j = 0; j < N; j++) {
            int jogador = mat[i][j];
            int posicao = j + 1;

            if (!eliminado[jogador]) {
                pontos[jogador] += (N - posicao) * competicao;
            }
        }
    }

   
    int primeiro = -1, segundo = -1, terceiro = -1;

    for (int i = 1; i <= N; i++) {
        if (eliminado[i]) continue;

        if (primeiro == -1 || pontos[i] > pontos[primeiro]) {
            terceiro = segundo;
            segundo = primeiro;
            primeiro = i;
        } else if (segundo == -1 || pontos[i] > pontos[segundo]) {
            terceiro = segundo;
            segundo = i;
        } else if (terceiro == -1 || pontos[i] > pontos[terceiro]) {
            terceiro = i;
        }
    }

    
    printf("O primeiro lugar foi: %d\n", primeiro);
    printf("O segundo lugar foi: %d\n", segundo);
    printf("O terceiro lugar foi: %d\n", terceiro);

    return 0;
}
