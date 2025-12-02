#include <stdio.h>

int main() {

    float v[4], aux;

    // Lendo as 4 alturas
    scanf("%f", &v[0]);
    scanf("%f", &v[1]);
    scanf("%f", &v[2]);
    scanf("%f", &v[3]);

    // Ordenando o vetor (método simples: bubble sort pequeno)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (v[j] < v[i]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // Agora o vetor está assim:
    // v[0] = menor
    // v[1] = segunda menor
    // v[2] = terceira menor
    // v[3] = maior

    // Impressão no padrão exigido:
    printf("%.2f\n", v[0]); // menor
    printf("%.2f\n", v[1]); // segunda menor
    printf("%.2f\n", v[3]); // maior
    printf("%.2f\n", v[2]); // terceira menor

    return 0;
}