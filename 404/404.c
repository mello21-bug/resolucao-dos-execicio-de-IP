#include <stdio.h>
#include <string.h>

void ClassificaAluno(float media, int faltas, char resultado[]) {
    if (faltas > 10) {
        strcpy(resultado, "REPROVADO POR FALTAS");
    } else if (media >= 9.5) {
        strcpy(resultado, "APROVADO COM LOUVOR");
    } else if (media >= 7.0) {
        strcpy(resultado, "APROVADO");
    } else {
        strcpy(resultado, "REPROVADO");
    }
}

int main() {
    float media;
    int faltas;
    char resultado[30];

    scanf("%f", &media);
    scanf("%d", &faltas);

    ClassificaAluno(media, faltas, resultado);

    printf("%s\n", resultado);

    return 0;
}
