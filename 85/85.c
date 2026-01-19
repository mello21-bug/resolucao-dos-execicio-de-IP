#include <stdio.h>
#include <string.h>

int main() {
    int K;
    scanf("%d", &K);

    while (K--) {
        int N;
        scanf("%d", &N);

        char senha[10], chute[10];
        scanf("%s", senha);

        while (1) {
            scanf("%s", chute);

            // condição de desistência
            if (chute[0] == '0')
                break;

            int E = 0, B = 0;
            int usadoSenha[10] = {0};
            int usadoChute[10] = {0};

            // Contar excelentes (E)
            for (int i = 0; i < N; i++) {
                if (senha[i] == chute[i]) {
                    E++;
                    usadoSenha[i] = 1;
                    usadoChute[i] = 1;
                }
            }

            // Contar bons (B)
            for (int i = 0; i < N; i++) {
                if (usadoChute[i]) continue;

                for (int j = 0; j < N; j++) {
                    if (!usadoSenha[j] && chute[i] == senha[j]) {
                        B++;
                        usadoSenha[j] = 1;
                        break;
                    }
                }
            }

            // Saída
            printf("(%d,%d)\n", E, B);

            // Se acertou a senha, encerra o jogo
            if (E == N)
                break;
        }
    }

    return 0;
}
