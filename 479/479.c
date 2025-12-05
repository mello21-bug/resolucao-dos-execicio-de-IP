#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    int mapa[100][100];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }

    int C;
    scanf("%d", &C);

    char comandos[1000];

    
    for (int i = 0; i < C; i++) {
        scanf(" %c", &comandos[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    
    for (int i = 0; i < C; i++) {
        int nx = x;
        int ny = y;

        if (comandos[i] == 'C') {
            nx = x - 1;
        } else if (comandos[i] == 'B') {
            nx = x + 1;
        } else if (comandos[i] == 'E') {
            ny = y - 1;
        }else if (comandos[i] == 'D') {
            ny = y + 1;
        }

       
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && mapa[nx][ny] == 1) {
            x = nx;
            y = ny;
        }
    }

    printf("(%d,%d)", x, y);

    return 0;
}