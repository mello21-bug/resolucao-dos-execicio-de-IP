#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fraldasPorDia(int idade) {
    if (idade <= 2)
        return 9;
    else
        return 6;
}

int main() {
    int idade;
    char resposta[10];
    int total_fraldas = 0;

    while (1) {
        scanf("%d", &idade);
        scanf("%s", resposta);

        total_fraldas += fraldasPorDia(idade) * 30;

        // converter resposta para minúsculo
        for (int i = 0; resposta[i]; i++) {
            resposta[i] = tolower(resposta[i]);
        }

        if (strcmp(resposta, "sim") != 0) {
            break;
        }
    }

    int pacotes;
    int sobra;

    if (total_fraldas % 100 == 0) {
        pacotes = total_fraldas / 100;
    } else {
        pacotes = (total_fraldas / 100) + 1;
    }

    sobra = pacotes * 100 - total_fraldas;

    printf("%d\n%d\n", pacotes, sobra);

    return 0;
}
