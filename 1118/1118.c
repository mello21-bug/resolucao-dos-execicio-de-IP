#include <stdio.h>

int main() {

    double nota, soma;
    int opcao, qnotas;

    while(1) {
        
        soma=0.0;
        qnotas=0;

        //ler duas notas validas
        while(qnotas<2) {
            scanf("%lf", &nota);

            if(nota>=0.0 && nota <=10.0) {
                soma+=nota; 
                qnotas++;
            } else {
                printf("nota invalida\n");
            }
        }

        //imprimir a media 

        printf("media = %.2lf\n", soma/2.0); 
         
        //pergunta novo calculo

        while(1) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
            
            if(opcao==1 || opcao==2) {
                break;
            }
        }

        if(opcao==2) {
            break;
        }

    }


    return 0;
}