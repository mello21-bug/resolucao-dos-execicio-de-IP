#include <stdio.h>
#include <string.h>

// Estrutura para armazenar dados do aluno
typedef struct {
    char nome[100];
    double nota;
} Aluno;

// Estrutura para representar uma turma
typedef struct {
    Aluno alunos[100];
    int qtd;
    double media;
    int melhorAlunoIndice;
} Turma;

// Função que lê os dados de uma turma e calcula a média
void lerTurma(Turma *t) {
    t->qtd = 0;
    double soma = 0;
    t->melhorAlunoIndice = -1;
    double maiorNota = -1.0;

    while (1) {
        char entrada[100];
        scanf(" %s", entrada);
        
        if (strcmp(entrada, "*") == 0) break;

        strcpy(t->alunos[t->qtd].nome, entrada);
        scanf("%lf", &t->alunos[t->qtd].nota);

        soma += t->alunos[t->qtd].nota;

        // Verifica o melhor aluno da turma
        if (t->alunos[t->qtd].nota > maiorNota) {
            maiorNota = t->alunos[t->qtd].nota;
            t->melhorAlunoIndice = t->qtd;
        }

        t->qtd++;
    }

    if (t->qtd > 0) {
        t->media = soma / t->qtd;
    } else {
        t->media = 0;
    }
}

int main() {
    Turma turmaA, turmaB;

    // Leitura das duas turmas
    lerTurma(&turmaA);
    lerTurma(&turmaB);

    // 1. Decisão sobre a viagem das turmas (Média > 8)
    if (turmaA.media > 8 && turmaB.media > 8) {
        printf("Viagem para todos!\n");
    } else if (turmaA.media > 8) {
        printf("Viagem para turma A\n");
    } else if (turmaB.media > 8) {
        printf("Viagem para turma B\n");
    } else {
        printf("Nenhuma das turmas viaja...\n");
    }

    // 2. Determinar o melhor aluno global
    Aluno *melhorGlobal = NULL;
    
    // Comparação entre os melhores de cada turma
    double notaA = (turmaA.melhorAlunoIndice != -1) ? turmaA.alunos[turmaA.melhorAlunoIndice].nota : -1;
    double notaB = (turmaB.melhorAlunoIndice != -1) ? turmaB.alunos[turmaB.melhorAlunoIndice].nota : -1;

    if (notaA > notaB) {
        if (notaA > 8) melhorGlobal = &turmaA.alunos[turmaA.melhorAlunoIndice];
    } else {
        if (notaB > 8) melhorGlobal = &turmaB.alunos[turmaB.melhorAlunoIndice];
    }

    // 3. Saída do prémio individual
    if (melhorGlobal != NULL) {
        printf("%s ganhou viagem e ingresso no parque!\n", melhorGlobal->nome);
        printf("Nota: %.2f\n", melhorGlobal->nota);
    } else {
        printf("Ninguem ganhou viagem e ingresso no parque...\n");
    }

    return 0;
}