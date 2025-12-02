#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int v[50];

    // Lê os valores
    for(int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    // --------- MÉDIA ---------
    float soma = 0;
    for(int i = 0; i < N; i++) {
        soma += v[i];
    }
    float media = soma / N;

    // --------- ORDENA PARA MEDIANA ---------
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(v[j] < v[i]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // --------- MEDIANA ---------
    float mediana;
    if (N % 2 == 1) {
        mediana = v[N/2];
    } else {
        mediana = (v[N/2] + v[N/2 - 1]) / 2.0;
    }

    // --------- MODA ---------
    int freq[11] = {0}; // valores vão de 0 a 10
    for (int i = 0; i < N; i++) {
        freq[v[i]]++;
    }

    int maiorFreq = 0;
    for (int i = 0; i <= 10; i++) {
        if (freq[i] > maiorFreq) {
            maiorFreq = freq[i];
        }
    }

    int qtdModas = 0;
    int modaValor = -1;

    for (int i = 0; i <= 10; i++) {
        if (freq[i] == maiorFreq) {
            qtdModas++;
            modaValor = i;
        }
    }

    // --------- SAÍDA ---------
    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);

    if (qtdModas == 1 && maiorFreq > 1) {
        printf("Moda: %.2f\n", (float)modaValor);
    } else {
        printf("Nao tem moda\n");
    }

    return 0;
}
