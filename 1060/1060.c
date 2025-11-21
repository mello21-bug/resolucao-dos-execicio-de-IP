
#include <stdio.h>
//versão com for
int main() {
    float valor;
    int positivos = 0;
    int i;

    for(i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if(valor > 0) {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}

#include <stdio.h>
//versão com while
int main() {
    float valor;
    int positivos = 0;
    int i = 0;

    while (i < 6) {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        }

        i++; 
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}

#include <stdio.h>
//versão do while
int main() {
    float valor;
    int positivos = 0;
    int i = 0;

    do {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        }

        i++; 
    } while (i < 6);

    printf("%d valores positivos\n", positivos);

    return 0;
}

