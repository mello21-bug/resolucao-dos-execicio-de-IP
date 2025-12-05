#include <stdio.h>

int main() {
    int k;

    while (1) {
        scanf("%d", &k);
        if (k == 0) {
            break;
        }

        int m[4][4];

        
        for (int col = 0; col < 4; col++) {
            for (int lin = 0; lin < 4; lin++) {
                scanf("%d", &m[lin][col]);
            }
        }

        
        for (int i = 0; i < 4; i++) {
            m[i][i] *= k;
        }

        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}