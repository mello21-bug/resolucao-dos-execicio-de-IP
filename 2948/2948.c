#include <stdio.h>
#include <math.h>

int main() {
    char computadores[5][10];
    
    
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 10; x++) {
            scanf(" %c", &computadores[y][x]); 
        }
    }
    
    int melhor_x = -1, melhor_y = -1;
    double melhor_tempo = 1e9;
    
    
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 10; x++) {
            if (computadores[y][x] == '0' || computadores[y][x] == '1') {
                double distancia = sqrt(x*x + y*y);
                double tempo = distancia * 20;
                
                if (computadores[y][x] == '0') {
                    tempo += 40; 
                }
                
                
                if (tempo < melhor_tempo || 
                    (tempo == melhor_tempo && y < melhor_y)) {
                    melhor_tempo = tempo;
                    melhor_x = x;
                    melhor_y = y;
                }
            }
        }
    }
    
    
    if (melhor_x == -1) {
        printf("Tristemente voce vai ter que aturar os PCs do grad 4\n");
    } else {
        printf("Vai la pro computador %d da fileira %d\n", melhor_x, melhor_y);
    }
    
    return 0;
}
