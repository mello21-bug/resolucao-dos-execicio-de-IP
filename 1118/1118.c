#include <stdio.h>

int main() {

    double nota, media, nro_notas;
    int x;
    
    media = 0;
    nro_notas = 0;
    do {
        scanf("%lf", &nota);
        if(nota < 0 || nota > 10) {
            printf("nota invalida\n");
        } else {
            media+=nota;
            nro_notas++;
             if(nro_notas == 2) {
                media = media/2;
                printf("media = %0.2lf\n", media);
                
                do{
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &x);
                if (x==1) {
                    media = 0;
                        nro_notas = 0;
                } 
                } while (x<1 || x>2);
            }
                
        }
        
    } while(x!=2);
    return 0;
}