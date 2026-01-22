#include <stdio.h>

double CalculaMulta(int velocidade) {
    double multa = 0.0;
    int limite = 50;
    int excedente;

    if (velocidade <= limite) {
        multa = 0.0;
    }
    else if (velocidade <= limite * 1.10) {
        multa = 230.0;
    }
    else if (velocidade <= limite * 1.20) {
        multa = 340.0;
    }
    else {
        excedente = velocidade - limite;
        multa = excedente * 19.28;
    }

    return multa;
}

int main() {
    int velocidade;
    double multa;

    scanf("%d", &velocidade);

    multa = CalculaMulta(velocidade);

    printf("%.2lf\n", multa);

    return 0;
}
