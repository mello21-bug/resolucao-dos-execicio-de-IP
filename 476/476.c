#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[21];
    int id;
    int level;
    int vida;
    int ataque;
    int defesa;
};

int main() {
    int X;
    scanf("%d", &X);
    getchar(); // limpa o '\n'

    struct Personagem p[X];

    for (int i = 0; i < X; i++) {
        fgets(p[i].nome, 21, stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';

        scanf("%d", &p[i].id);
        scanf("%d", &p[i].level);
        scanf("%d", &p[i].vida);
        scanf("%d", &p[i].ataque);
        scanf("%d", &p[i].defesa);
        getchar(); // limpa o '\n'
    }

    for (int i = 0; i < X; i++) {
        printf("Nome: %s\n", p[i].nome);
        printf("ID: %d\n", p[i].id);
        printf("Level: %d\n", p[i].level);
        printf("Vida: %d\n", p[i].vida);
        printf("Ataque: %d\n", p[i].ataque);
        printf("Defesa: %d\n", p[i].defesa);
    }

    return 0;
}
