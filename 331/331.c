#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados do usuário
typedef struct {
    int idade;
    char nome[51];
    char sexo;
    char estado_civil;
    int amigos;
    int fotos;
} Usuario;

int main() {
    int n, i;

    // Lendo a quantidade de usuários
    if (scanf("%d", &n) != 1) return 0;

    Usuario banco[n];

    // Leitura dos dados
    for (i = 0; i < n; i++) {
        scanf("%d", &banco[i].idade);
        
        // Limpa o buffer e lê o nome (pode conter espaços dependendo do caso, 
        // mas aqui usamos %s para strings simples conforme o exemplo)
        scanf(" %[^\n]s", banco[i].nome); 
        
        scanf(" %c", &banco[i].sexo);
        scanf(" %c", &banco[i].estado_civil);
        scanf("%d", &banco[i].amigos);
        scanf("%d", &banco[i].fotos);
    }

    // Impressão dos dados seguindo o formato solicitado
    for (i = 0; i < n; i++) {
        printf("Idade: %d\n", banco[i].idade);
        printf("Nome: %s\n", banco[i].nome);
        printf("Sexo: %c\n", banco[i].sexo);
        printf("Estado Civil: %c\n", banco[i].estado_civil);
        printf("Numero de amigos: %d\n", banco[i].amigos);
        printf("Numero de fotos: %d\n\n", banco[i].fotos);
    }

    return 0;
}

