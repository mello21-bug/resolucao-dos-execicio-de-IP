#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char mensagem[N];
    char c;
    int M;

    for (int i = 0; i < N; i++) {
         scanf(" %c", &c);
         scanf("%d", &M);
         mensagem[M]=c;
    }

    for(int i=0; i<N; i++) {
        printf("%c", mensagem[i]);
    }

}