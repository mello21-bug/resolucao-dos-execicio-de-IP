#include <stdio.h>

int main() {
    int a[20], b[20], inter[20];
    int tam = 0;

    // lê primeiro array
    for (int i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
    }

    // lê segundo array
    for (int i = 0; i < 20; i++) {
        scanf("%d", &b[i]);
    }

    // encontra interseção sem repetição
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {

            if (a[i] == b[j]) {

                // verifica se já está em inter[]
                int existe = 0;
                for (int k = 0; k < tam; k++) {
                    if (inter[k] == a[i]) {
                        existe = 1;
                        break;
                    }
                }

                if (!existe) {
                    inter[tam] = a[i];
                    tam++;
                }
            }
        }
    }

    // se não encontrou nada
    if (tam == 0) {
        printf("VAZIO\n");
        return 0;
    }

    // ordenação simples
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (inter[j] < inter[i]) {
                int aux = inter[i];
                inter[i] = inter[j];
                inter[j] = aux;
            }
        }
    }

    // imprime o resultado
    for (int i = 0; i < tam; i++) {
        printf("%d\n", inter[i]);
    }

    return 0;
}
