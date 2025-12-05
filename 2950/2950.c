#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

char tabuleiro[SIZE][SIZE];

int main() {
    int reiX = -1, reiY = -1;

    // Lê o tabuleiro e encontra o rei
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            scanf(" %c", &tabuleiro[y][x]);
            if (tabuleiro[y][x] == 'K') {
                reiX = x;
                reiY = y;
            }
        }
    }

    bool xeque = false;

    // Movimentos do cavalo
    int cavaloX[8] = {1,2,2,1,-1,-2,-2,-1};
    int cavaloY[8] = {-2,-1,1,2,2,1,-1,-2};

    // Movimentos do rei adversário
    int reiAdX[8] = {-1,0,1,-1,1,-1,0,1};
    int reiAdY[8] = {-1,-1,-1,0,0,1,1,1};

    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            char p = tabuleiro[y][x];

            if (p == '-') continue;

            // Peão adversário
            if (p == 'p') {
                int dx[2] = {-1,1};
                int dy = 1; // frente do adversário
                for (int i=0;i<2;i++) {
                    int nx = x + dx[i];
                    int ny = y + dy;
                    if (nx>=0 && nx<SIZE && ny>=0 && ny<SIZE) {
                        if (nx==reiX && ny==reiY) xeque=true;
                    }
                }
            }

            // Torre adversária
            if (p == 't' || p == 'q') {
                int dirsX[4] = {0,0,1,-1};
                int dirsY[4] = {1,-1,0,0};
                for (int d=0;d<4;d++) {
                    int nx=x+dirsX[d], ny=y+dirsY[d];
                    while(nx>=0 && nx<SIZE && ny>=0 && ny<SIZE) {
                        if(nx==reiX && ny==reiY){ xeque=true; break; }
                        if(tabuleiro[ny][nx]!='-') break;
                        nx+=dirsX[d]; ny+=dirsY[d];
                    }
                }
            }

            // Bispo adversário
            if (p == 'b' || p == 'q') {
                int dirsX[4] = {1,1,-1,-1};
                int dirsY[4] = {1,-1,1,-1};
                for(int d=0;d<4;d++){
                    int nx=x+dirsX[d], ny=y+dirsY[d];
                    while(nx>=0 && nx<SIZE && ny>=0 && ny<SIZE){
                        if(nx==reiX && ny==reiY){ xeque=true; break; }
                        if(tabuleiro[ny][nx]!='-') break;
                        nx+=dirsX[d]; ny+=dirsY[d];
                    }
                }
            }

            
            if(p=='c'){
                for(int i=0;i<8;i++){
                    int nx=x+cavaloX[i], ny=y+cavaloY[i];
                    if(nx>=0 && nx<SIZE && ny>=0 && ny<SIZE){
                        if(nx==reiX && ny==reiY) xeque=true;
                    }
                }
            }

            
            if(p=='k'){
                for(int i=0;i<8;i++){
                    int nx=x+reiAdX[i], ny=y+reiAdY[i];
                    if(nx>=0 && nx<SIZE && ny>=0 && ny<SIZE){
                        if(nx==reiX && ny==reiY) xeque=true;
                    }
                }
            }
        }
    }

    if(xeque) printf("XEQUE\n");
    else printf("NAO XEQUE\n");

    return 0;
}
