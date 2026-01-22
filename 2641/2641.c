#include <stdio.h>

long long calcularHoras(long long E, long long X, long long N,
                        long long acumulado, int hora) {
    // Se já atingiu ou passou o valor desejado
    if (acumulado >= E) {
        return hora - 1;
    }

    // Produção da hora atual
    long long producaoHora = N * (X + 100 * (hora - 1));

    // Chamada recursiva
    return calcularHoras(E, X, N, acumulado + producaoHora, hora + 1);
}

int main() {
    long long E, X, N;
    scanf("%lld %lld %lld", &E, &X, &N);

    long long horas = calcularHoras(E, X, N, 0, 1);

    printf("Precisamos de %lld horas para conseguirmos imprimir %lld euros.\n",
           horas, E);

    return 0;
}
