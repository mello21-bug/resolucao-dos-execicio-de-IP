#include <stdio.h>

// Defini��o da estrutura para armazenar as vendas do dia
struct Venda {
    int qtdPaes;
    int qtdBroas;
    double totalArrecadado;
    double poupanca;
};

int main() {
    struct Venda dia;

    // Leitura das quantidades vendidas
    if (scanf("%d %d", &dia.qtdPaes, &dia.qtdBroas) != 2) return 0;

    // Constantes de pre�os conforme o enunciado
    double precoPao = 0.45;
    double precoBroa = 2.25;

    // C�lculo da arrecada��o total: (qtdPaes * 0.45) + (qtdBroas * 2.25)
    dia.totalArrecadado = (dia.qtdPaes * precoPao) + (dia.qtdBroas * precoBroa);

    // C�lculo da poupan�a: 15% do total arrecadado
    dia.poupanca = dia.totalArrecadado * 0.15;

    // Sa�da formatada com duas casas decimais
    // O enunciado pede apenas os valores, sem textos adicionais
    printf("%.1f\n", dia.totalArrecadado);
    printf("%.1f\n", dia.poupanca);

    return 0;
}