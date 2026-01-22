#include <stdio.h>

void AnalisarSituacao(float n1, float n2, float n3, float n4) {
    float soma, media;

    soma = n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4;
    media = soma / 10.0;

    if (media >= 9.0) {
        printf("aprovado com louvor\n");
    }
    else if (media >= 7.0) {
        printf("aprovado\n");
    }
    else if (media < 3.0) {
        printf("reprovado\n");
    }
    else {
        printf("prova final\n");
    }
}

int main() {
    float n1, n2, n3, n4;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    AnalisarSituacao(n1, n2, n3, n4);

    return 0;
}
