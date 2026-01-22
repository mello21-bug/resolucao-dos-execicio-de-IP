#include <stdio.h>

long long resolver(long long f_ant, long long f_atual, long long P, int tentativas) {
    // Se perder mais que 300 ml, desmaia
    if (tentativas * 12 > 300) {
        return -1;
    }

    // Se a força já for suficiente
    if (f_atual >= P) {
        return tentativas * 12;
    }

    // Próxima força (recorrência tipo Pell)
    long long prox = 2 * f_atual + f_ant;

    return resolver(f_atual, prox, P, tentativas + 1);
}

int main() {
    long long C, T, P;
    scanf("%lld %lld", &C, &T);
    scanf("%lld", &P);

    // Tentativa 0
    if (C >= P) {
        printf("Eleven perdeu 12ml de sangue.\n");
        return 0;
    }

    // Tentativa 1
    if (T >= P) {
        printf("Eleven perdeu 24ml de sangue.\n");
        return 0;
    }

    long long resultado = resolver(C, T, P, 2);

    if (resultado == -1) {
        printf("Eleven ficou fraca demais e acabou desmaiando\n");
    } else {
        printf("Eleven perdeu %lldml de sangue.\n", resultado);
    }

    return 0;
}
