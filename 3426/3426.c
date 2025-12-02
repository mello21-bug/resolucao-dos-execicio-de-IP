#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int V[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &V[i]);
        printf("%d ", V[i]);
        
    }
    printf("\n");

    int W[n];

    for (int i=0; i<n; i++) {
        int fat=1;
        for (int j=1; j<=V[i]; j++) {
            fat = fat * j;
        }
        W[i] = fat;
    }

    for (int i=0; i<n; i++) {
        printf("%d ", W[i]);
    }

    return 0;
}