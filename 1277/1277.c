#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    bool triangularSuperior = true;

    
    for (int i = 1; i < N; i++) {       
        for (int j = 0; j < i; j++) {   
            if (matriz[i][j] != 0) {
                triangularSuperior = false;
                break;
            }
        }
        if (!triangularSuperior) break;
    }

    if (triangularSuperior) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
