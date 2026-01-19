#include <stdio.h>
#include <string.h>

struct Passageiro {
    int passagem;
    char data[20];
    char origem[50];
    char destino[50];
    char horario[10];
    int poltrona;
    int idade;
    char nome[100];
};

int main() {
    struct Passageiro p[44];
    int i = 0;
    int somaIdades = 0;

    while (1) {
        scanf("%d", &p[i].passagem);
        getchar();

        if (p[i].passagem == -1) {
            break;
        }

        fgets(p[i].data, 20, stdin);
        p[i].data[strcspn(p[i].data, "\n")] = '\0';

        fgets(p[i].origem, 50, stdin);
        p[i].origem[strcspn(p[i].origem, "\n")] = '\0';

        fgets(p[i].destino, 50, stdin);
        p[i].destino[strcspn(p[i].destino, "\n")] = '\0';

        fgets(p[i].horario, 10, stdin);
        p[i].horario[strcspn(p[i].horario, "\n")] = '\0';

        scanf("%d", &p[i].poltrona);
        scanf("%d", &p[i].idade);
        getchar();

        fgets(p[i].nome, 100, stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';

        somaIdades += p[i].idade;
        i++;
    }

    float media = (float)somaIdades / i;

    for (int j = 0; j < i; j++) {
        if (p[j].idade > media && p[j].poltrona % 2 == 0) {
            printf("%s\n", p[j].nome);
        }
    }

    return 0;
}
