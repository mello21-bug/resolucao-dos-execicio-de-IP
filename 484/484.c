#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para converter string para minúsculas
void paraMinusculo(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char tipo[50], pais[50], controle[20];
    int qtdMacacos = 0;
    int qtdCobrasVenezuela = 0;
    int qtdTigres = 0;
    double somaPesoTigres = 0.0;
    double peso;

    while (1) {
        // Leitura dos dados do animal
        scanf("%s", tipo);
        scanf("%lf", &peso);
        getchar(); // limpar buffer
        fgets(pais, sizeof(pais), stdin);

        // Remove '\n' do país
        pais[strcspn(pais, "\n")] = '\0';

        // Padroniza strings
        paraMinusculo(tipo);
        paraMinusculo(pais);

        // Decisões
        if (strcmp(tipo, "macaco") == 0) {
            qtdMacacos++;
        }

        if (strcmp(tipo, "tigre") == 0) {
            qtdTigres++;
            somaPesoTigres += peso;
        }

        if (strcmp(tipo, "cobra") == 0 && strcmp(pais, "venezuela") == 0) {
            qtdCobrasVenezuela++;
        }

        // Controle de parada
        scanf("%s", controle);
        paraMinusculo(controle);

        if (strcmp(controle, "parar") == 0) {
            break;
        }
    }

    // Cálculo do peso médio dos tigres
    double mediaTigres = 0.0;
    if (qtdTigres > 0) {
        mediaTigres = somaPesoTigres / qtdTigres;
    }

    // Saída
    printf("%d\n", qtdMacacos);
    printf("%.2lf\n", mediaTigres);
    printf("%d\n", qtdCobrasVenezuela);

    return 0;
}
