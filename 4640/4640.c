#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    double nota;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    struct Aluno alunos[n];
    double somaNota = 0, somaIdade = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %lf", alunos[i].nome, &alunos[i].idade, &alunos[i].nota);
        somaNota += alunos[i].nota;
        somaIdade += alunos[i].idade;
    }

    // --- ORDENAÇÃO POR NOTA ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (alunos[j].nota > alunos[j + 1].nota) {
                struct Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }

    printf("---Notas---\n");
    for (int i = 0; i < n; i++) {
        printf("%s %.2f\n", alunos[i].nome, alunos[i].nota);
    }
    printf("---------\n");

    double medianaNota;
    if (n % 2 != 0) {
        medianaNota = alunos[n / 2].nota;
    } else {
        medianaNota = (alunos[(n / 2) - 1].nota + alunos[n / 2].nota) / 2.0;
    }
    printf("Media Nota: %.2f\n", somaNota / n);
    printf("Mediana Nota: %.2f\n\n", medianaNota);

    // --- ORDENAÇÃO POR IDADE ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (alunos[j].idade > alunos[j + 1].idade) {
                struct Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }

    printf("---Idade---\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", alunos[i].nome, alunos[i].idade);
    }
    printf("---------\n");

    double medianaIdade;
    if (n % 2 != 0) {
        medianaIdade = (double)alunos[n / 2].idade;
    } else {
        medianaIdade = (alunos[(n / 2) - 1].idade + alunos[n / 2].idade) / 2.0;
    }
    printf("Media Idade: %.2f\n", somaIdade / n);
    printf("Mediana Idade: %.2f\n", medianaIdade);

    return 0;
}