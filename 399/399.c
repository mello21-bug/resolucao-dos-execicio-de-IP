#include <stdio.h>
#include <string.h>
#include <ctype.h>

float CalculaHospedagem(char tipo[], int dias) {
    float diaria = 0.0;
    float total;
    int i;

    /* Converte para minúsculas */
    for (i = 0; tipo[i] != '\0'; i++) {
        tipo[i] = tolower(tipo[i]);
    }

    if (strcmp(tipo, "individual") == 0) {
        diaria = 125.0;
    }
    else if (strcmp(tipo, "suite dupla") == 0) {
        diaria = 140.0;
    }
    else if (strcmp(tipo, "suite tripla") == 0) {
        diaria = 180.0;
    }

    total = diaria * dias;

    if (dias >= 3) {
        total *= 0.85;   // 15% de desconto
    }

    return total;
}

int main() {
    char tipo[30];
    int dias;

    scanf(" %[^\n]", tipo);
    scanf("%d", &dias);

    printf("%.2f\n", CalculaHospedagem(tipo, dias));

    return 0;
}
