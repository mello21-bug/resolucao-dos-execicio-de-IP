#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int mat[101][101];
    int dp[101][101];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int maior = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (mat[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;  
                } else {
                    int menor = dp[i-1][j];
                    if (dp[i][j-1] < menor) menor = dp[i][j-1];
                    if (dp[i-1][j-1] < menor) menor = dp[i-1][j-1];
                    dp[i][j] = menor + 1;
                }

                if (dp[i][j] > maior) {
                    maior = dp[i][j];
                }

            } else {
                dp[i][j] = 0;  
            }
        }
    }

   
    printf("%d\n", maior * maior);

    return 0;
}