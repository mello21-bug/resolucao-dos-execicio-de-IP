#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // limpa o '\n'

    int matricula[1000];
    char nome[1000][100];
    float nota[1000];

    float soma = 0.0;

    // Leitura dos dados
    for (int i = 0; i < N; i++) {
        char linha[200];

        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';

        // Leitura formatada: matricula-nome-nota
        sscanf(linha, "%d-%[^-]-%f", &matricula[i], nome[i], &nota[i]);

        soma += nota[i];
    }

    float media = soma / N;

    // Ordenação (nota crescente, desempate por matrícula)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (nota[i] > nota[j] ||
               (nota[i] == nota[j] && matricula[i] > matricula[j])) {

                float auxNota = nota[i];
                nota[i] = nota[j];
                nota[j] = auxNota;

                int auxMat = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = auxMat;

                char auxNome[100];
                strcpy(auxNome, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], auxNome);
            }
        }
    }

    // Saída
    printf("Alunos abaixo da media:\n");
    for (int i = 0; i < N; i++) {
        if (nota[i] < media) {
            printf("Matricula: %d Nome: %s Nota: %.1f\n",
                   matricula[i], nome[i], nota[i]);
        }
    }

    printf("Alunos iguais ou acima da media:\n");
    for (int i = 0; i < N; i++) {
        if (nota[i] >= media) {
            printf("Matricula: %d Nome: %s Nota: %.1f\n",
                   matricula[i], nome[i], nota[i]);
        }
    }

    printf("Media = %.2f\n", media);

    return 0;
}
