#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = j + 1;
        }
    }

    
    for (int i = 0; i < n; i++) {

        
        for (int e = 0; e < i; e++) {
            printf("  ");
        }

        
        for (int j = i; j < n; j++) {
            printf("%d", m[i][j]);
            if (j < n - 1) printf(" ");
        }

        printf("\n");
    }

    return 0;
}
