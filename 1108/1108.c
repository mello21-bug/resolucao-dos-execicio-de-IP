#include <stdio.h>
#include <string.h>

int main() {
    char email[300];

    while (1) {
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0'; // remove '\n'

        if (strcmp(email, "sair") == 0)
            break;

        int arroba = 0, pontos = 0;
        int posArroba = -1;
        int valido = 1;

        int len = strlen(email);

        // Conta arrobas e pontos
        for (int i = 0; i < len; i++) {
            if (email[i] == '@') {
                arroba++;
                posArroba = i;
            }
            if (email[i] == '.')
                pontos++;
        }

        // Regras básicas
        if (arroba != 1 || pontos != 2)
            valido = 0;

        // Antes do @ deve ter ao menos 1 caractere
        if (posArroba <= 0)
            valido = 0;

        // Não pode começar ou terminar com ponto
        if (email[0] == '.' || email[len - 1] == '.')
            valido = 0;

        // Verifica estrutura após o @
        if (valido) {
            int partes = 0;
            int inicio = posArroba + 1;
            int i = inicio;

            while (i <= len) {
                if (email[i] == '.' || email[i] == '\0') {
                    // parte vazia é inválida
                    if (i - inicio < 1)
                        valido = 0;

                    partes++;
                    inicio = i + 1;
                }
                i++;
            }

            // dominio.tipodedominio.país → 3 partes
            if (partes != 3)
                valido = 0;
        }

        if (valido)
            printf("certo\n");
        else
            printf("errado\n");
    }

    return 0;
}
