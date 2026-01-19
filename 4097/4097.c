#include <stdio.h>
#include <string.h>

struct usuario {
    int idade;
    char nome[51];
    char sexo;
    char estadoCivil;
    int amigos;
    int fotos;
};

int main() {
    int n;
    struct usuario users[100];

    printf("Digite a quantidade de usuarios:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite os dados do usuario %d:\n", i + 1);

        scanf("%d", &users[i].idade);
        getchar();

        fgets(users[i].nome, 51, stdin);
        users[i].nome[strcspn(users[i].nome, "\n")] = '\0';

        scanf(" %c", &users[i].sexo);
        scanf(" %c", &users[i].estadoCivil);
        scanf("%d", &users[i].amigos);
        scanf("%d", &users[i].fotos);
    }

    for (int i = 0; i < n; i++) {
        printf("Idade: %d\n", users[i].idade);
        printf("Nome: %s\n", users[i].nome);
        printf("Sexo: %c\n", users[i].sexo);
        printf("Estado Civil: %c\n", users[i].estadoCivil);
        printf("Numero de amigos: %d\n", users[i].amigos);
        printf("Numero de fotos: %d\n", users[i].fotos);

        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}
