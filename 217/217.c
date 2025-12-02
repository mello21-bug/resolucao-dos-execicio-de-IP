#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int v[10000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int atual = 1;   
    int maior = 1;   

    for (int i = 1; i < N; i++) {
        if (v[i] == v[i-1]) {
            atual++;          
        } else {
            atual = 1;        
        }

        if (atual > maior) {
            maior = atual;    
        }
    }

    printf("%d\n", maior);
    return 0;
}
