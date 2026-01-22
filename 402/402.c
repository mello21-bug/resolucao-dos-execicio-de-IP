#include <stdio.h>

void EstacaoAno(int dia, int mes) {

    if ((mes == 9 && dia >= 21) || mes == 10 || mes == 11 || (mes == 12 && dia <= 20)) {
        printf("PRIMAVERA\n");
    }
    else if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia <= 20)) {
        printf("VERAO\n");
    }
    else if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia <= 20)) {
        printf("OUTONO\n");
    }
    else {
        printf("INVERNO\n");
    }
}

int main() {
    int dia, mes;

    scanf("%d", &dia);
    scanf("%d", &mes);

    EstacaoAno(dia, mes);

    return 0;
}
