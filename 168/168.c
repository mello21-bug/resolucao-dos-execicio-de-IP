#include <stdio.h>

int main() {
    float qtd[3][4];   
    float preco[4];    
    float custo[3];    
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%f", &qtd[i][j]); 
        }
    }

    
    for (int i = 0; i < 4; i++) {
        scanf("%f", &preco[i]);
    }

    
    for (int i = 0; i < 3; i++) {
        custo[i] = 0;
        for (int j = 0; j < 4; j++) {
            custo[i] += qtd[i][j] * preco[j];
        }
    }

    
    for (int i = 0; i < 3; i++) {
        printf("%.2f\n", custo[i]);
    }

    return 0;
}