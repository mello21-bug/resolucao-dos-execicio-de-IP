#include <stdio.h>

int main (){

    int N;
    char moeda;

    // Copos começam vazios
    char copos[3] = {'-', '-', '-'}, aux;
    int movimento, i;

    scanf("%d", &N);      // quantidade de movimentos
    scanf(" %c", &moeda); // copo inicial da moeda

    // Coloca a moeda no copo inicial
    copos[moeda - 'A'] = 'X';

    // Processa os movimentos
    for(i = 0; i < N; i++) {

        scanf("%d", &movimento);

        switch (movimento) {
            case 1: // troca A ↔ B
                aux = copos[0];
                copos[0] = copos[1];
                copos[1] = aux;
                break;

            case 2: // troca B ↔ C
                aux = copos[1];
                copos[1] = copos[2];
                copos[2] = aux;
                break;

            case 3: // troca A ↔ C
                aux = copos[0];
                copos[0] = copos[2];
                copos[2] = aux;
                break;
        }
    }

    // Procura onde a moeda terminou
    for(i = 0; i < 3; i++){
        if(copos[i] == 'X'){
            printf("%c\n", 'A' + i);
        }
    }

    return 0;
}

