#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
} Aluno;

/* Função para ordenar alunos em ordem alfabética */
void ordenarAlfabetico(Aluno v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(v[i].nome, v[j].nome) > 0) {
                Aluno aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%f %f %f",
              &alunos[i].n1,
              &alunos[i].n2,
              &alunos[i].n3);

        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;
    }

    ordenarAlfabetico(alunos, n);

    for (int i = 0; i < n; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Media: %.2f\n", alunos[i].media);

       if (alunos[i].media >= 7.0) {
        printf("Situcao: Aprovado\n\n");
        } else if (alunos[i].media >= 3.0) {
             printf("Situcao: Final\n\n");
        } else {
             printf("Situcao: Reprovado\n\n");
        }

    }

    return 0;
}