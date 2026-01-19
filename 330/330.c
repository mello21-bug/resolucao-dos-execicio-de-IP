#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[31];
    char nome[501];
    int idade;
    int sexo;
    float notaEnem;
} Aluno;

typedef struct {
    char codigo[26];
    char nome[101];
    int qtdMatriculados;
    char nomesMatriculados[100][501]; // Armazena nomes para ordenação posterior
} Disciplina;

int main() {
    int n, m, p;

    // 1. Leitura dos Alunos
    if (scanf("%d", &n) != 1) return 0;
    Aluno alunos[n];
    int masc = 0, fem = 0;
    float somaIdades = 0, somaIdadesEnem = 0;
    int contEnem = 0;

    for (int i = 0; i < n; i++) {
        scanf(" %s", alunos[i].codigo);
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%d %d %f", &alunos[i].idade, &alunos[i].sexo, &alunos[i].notaEnem);

        if (alunos[i].sexo == 1) masc++; else fem++;
        somaIdades += alunos[i].idade;
        if (alunos[i].notaEnem > 7.5) {
            somaIdadesEnem += alunos[i].idade;
            contEnem++;
        }
    }

    // 2. Leitura das Disciplinas
    scanf("%d", &m);
    Disciplina disc[m];
    for (int i = 0; i < m; i++) {
        scanf(" %s", disc[i].codigo);
        scanf(" %[^\n]", disc[i].nome);
        disc[i].qtdMatriculados = 0;
    }

    // 3. Processamento das Matrículas
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        char codA[31], codD[26];
        scanf("%s %s", codA, codD);

        // Encontrar o nome do aluno e a disciplina correspondente
        char nomeAluno[501];
        for (int j = 0; j < n; j++) {
            if (strcmp(alunos[j].codigo, codA) == 0) {
                strcpy(nomeAluno, alunos[j].nome);
                break;
            }
        }
        for (int j = 0; j < m; j++) {
            if (strcmp(disc[j].codigo, codD) == 0) {
                strcpy(disc[j].nomesMatriculados[disc[j].qtdMatriculados], nomeAluno);
                disc[j].qtdMatriculados++;
                break;
            }
        }
    }

    // 4. Saída de Estatísticas Gerais
    printf("%d\n%d\n", masc, fem);
    printf("%.2f\n", somaIdades / n);
    if (contEnem > 0) printf("%.2f\n", somaIdadesEnem / contEnem);
    else printf("0.00\n");

    // 5. Ordenação das Disciplinas por Nome
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (strcmp(disc[j].nome, disc[j+1].nome) > 0) {
                Disciplina temp = disc[j];
                disc[j] = disc[j+1];
                disc[j+1] = temp;
            }
        }
    }

    // 6. Ordenação dos Alunos dentro de cada Disciplina e Impressão Final
    for (int i = 0; i < m; i++) {
        printf("%s\n%d\n", disc[i].nome, disc[i].qtdMatriculados);
        
        // Bubble Sort nos nomes dos alunos matriculados
        for (int a = 0; a < disc[i].qtdMatriculados - 1; a++) {
            for (int b = 0; b < disc[i].qtdMatriculados - a - 1; b++) {
                if (strcmp(disc[i].nomesMatriculados[b], disc[i].nomesMatriculados[b+1]) > 0) {
                    char tempNome[501];
                    strcpy(tempNome, disc[i].nomesMatriculados[b]);
                    strcpy(disc[i].nomesMatriculados[b], disc[i].nomesMatriculados[b+1]);
                    strcpy(disc[i].nomesMatriculados[b+1], tempNome);
                }
            }
        }

        for (int a = 0; a < disc[i].qtdMatriculados; a++) {
            printf("%s\n", disc[i].nomesMatriculados[a]);
        }
    }

    return 0;
}